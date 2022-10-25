#include <iostream>
#include <omp.h>
#include <random>

using namespace std;

// threads brauchen unterschiedliche seeds, nimm dafür evtl deren index
// try optimization with -0fast flag

void pi_monte_carlo_sequential();
void pi_monte_carlo_parallel();

int main()
{
    double start_time = omp_get_wtime(); // wall clock time in seconds
    pi_monte_carlo_sequential();
    double run_time = omp_get_wtime() - start_time;
    cout << " with run_time= " << run_time << " seconds\n";

    start_time = omp_get_wtime(); // wall clock time in seconds
    pi_monte_carlo_parallel();
    run_time = omp_get_wtime() - start_time;
    cout << " with run_time= " << run_time << " seconds\n";
}

void pi_monte_carlo_sequential()
{
    int n = 100000000; // amount of points to generate
    int counter = 0;   // counter for points in the first quarter of a unit circle

    int seed = 0;
    default_random_engine re{seed};
    uniform_real_distribution<double> zero_to_one{0.0, 1.0};

    // compute n points and test if they lie within the first quadrant of a unit circle
    for (int i = 0; i < n; ++i)
    {
        auto x = zero_to_one(re); // generate random number between 0.0 and 1.0
        auto y = zero_to_one(re); // generate random number between 0.0 and 1.0
        if (x * x + y * y <= 1.0)
        { // if the point lies in the first quadrant of a unit circle
            ++counter;
        }
    }

    auto pi = 4 * (double(counter) / n);
    cout << "Seqential -> pi= " << pi << ", n= " << n;
}

void pi_monte_carlo_parallel()
{
    int n = 100000000; // amount of points to generate
    int counter = 0;   // counter for points in the first quarter of a unit circle

    omp_set_num_threads(8); // setting the desired number of threads in the parallel region
#pragma omp parallel        // parallel region starts here
    {
        int num_threads = omp_get_num_threads();
        int thread_id = omp_get_thread_num();

        default_random_engine re{thread_id};
        uniform_real_distribution<double> zero_to_one{0.0, 1.0};

        // compute n points and test if they lie within the first quadrant of a unit circle
        for (int i = thread_id; i < n; i += num_threads)
        {
            auto x = zero_to_one(re); // generate random number between 0.0 and 1.0
            auto y = zero_to_one(re); // generate random number between 0.0 and 1.0

#pragma omp atomic
            if (x * x + y * y <= 1.0)
            { // if the point lies in the first quadrant of a unit circle
                ++counter;
            }
        }
    }
    auto pi = 4 * (double(counter) / n);
    cout << "Parallel -> pi= " << pi << ", n= " << n;
}
