#include <iostream>
#include <omp.h>

/*
 *
 */
int main()
{
    // slide 13
    // slide 15
    // slide 17 in parallel
    // --> Print and document run time in answers

    omp_get_num_threads(); //  brauchen wir zum aufteilen für PI
    omp_get_thread_num();
    omp_get_wtime();

    // try optimization with -0fast flag

    return 0;
}
