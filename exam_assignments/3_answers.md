# Exam Assignment 3

1. **How does ordered clause work in OpenMP work in conjunction with a parallel for loop?**

    * The ordered clause turns a region within the parallel region into a sequential region. Therefore the threads have to wait at the beginning of the ordered region, until another thread can enter it.
    * The parallel region must know in advance that an ordered region will be used.
<br>

2. **What is the collapse clause in OpenMP good for?**

    * The collapse clause can parallelize nested for loops. Internally the multiple loops will be structured into one loop.
    <br>

3. **Explain how reduction works internally in OpenMP:**

    * For example when using the sum operator for a reduction. Each thread gets a unique local variable of the sum variable.
    * Therefore different threads cant run into race conditions on this variable.
    * Once every thread finished its part of the reduction, the remaining thread variables (sum variables) will be reduced to a single variable which is the answer.
    <br>

4. **What is the purpose of a barrier in parallel programming?**

    * Barriers are a synchronization point for the threads. Each thread has to wait at a barrier, until all threads reach the barrier.
    <br>

5. **Differences between:**

    * 1) ´omp_get_num_threads()´: Returns the number of threads in the current time within the inner most region. If we are in a sequential region, returns 1. Can be changed with set_num_threads(n).
    * 2) ´omp_get_num_procs()´: Returns number of processors that are available to the device. Should be always the same on one computer.
    * 3) ´omp_get_max_threads()´: Returns the upper bound of available threads that can be used for a parallel region.
    <br>

6. **Clarify how storage attribute private and first private differ from each other:**

    * The private modifier for a variable x, creates an unitialized copy of x for each thread.
    * The first-private modifier creates a true copy (initialized and with the original value) of variable x for each thread.
    <br>

7. **Warmup and pseudo code in `/warmup` and `/assignment`.**