#include <iostream>
#include <omp.h>

/*
 * 
 */
int main()
{
    // pi monte carlo in parallel. ist schlechter sogar haha als das numerische PI
    // document runtime improvement
    // threads brauchen unterschiedliche seeds, nimm dafür evtl deren index

    omp_set_num_threads(4); // tells compiler how many, he could take more or less. its a empfehlung tbh
    omp_get_num_threads();  //  brauchen wir zum aufteilen für PI
    omp_get_thread_num();
    omp_get_wtime();

    // try optimization with -0fast flag

    return 0;
}
