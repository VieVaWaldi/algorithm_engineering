# Exam Assignment 2

1. **What causes false sharing?**

    * Data is loaded into the cache on a cacheline (usually 64 byte). Let us assume we have 2 CPUs that need one variable each. Both variables lie on the same cache line. 
    * If CPU1 updates its variable, the Cache-Coherence-Protocoll invalidates the chacheline for the other CPU. Therfore the 2nd CPU has to wait for the update on the cache line.
    * The cause is the second variable that was loaded onto the same cache line and the result from the Cache-Coherence-Protocoll.
    <br>

2. **How do mutual exclusion constructs prevent race conditions?**

    * Mutual exclusion prohibits 2 or more processes/threads to read or write one variable at the same time. This prevents lost updates/ undefined results on the variable, because the 2nd process has to wait until the first process finished the whole update cycle.
    * Boiled down this can be represented as a queue where the processes have to wait on each other.
    <br>

3. **Difference between static and dynamic schedules:**

    * Both schedules decide how the iterations of a loop will be mapped onto different threads.
    * Static Schedule: Iterations of a loop are statically assigned to threads at compile time.
    * Dynamic Schedule: Iterations of a loop are dynamically assigned to free threads at run time. If a thread finished it will be assigned the next iteration that has not been executed yet.
    * A dynamic schedule has more overhead, therefore using it usually only becomes profitable for problems where each iteration has a different work load.
    <br>

4. **How to early exit a loop:**

    * One possibility is to run empty iterations once a solution is found. There are also cancellation points provided by OMP.
    <br>

5. **Code: In the folder `/lecture_2/warmup`.**

* How `std::atomic::compare_exchange_weak` works:

    * It compares the actual value of the atomic variable it is used on with an expected value. The comparison is done bitwise. If the result is true, the actual atomic value is replaced by a third value, otherwise the expected value is replaced by the third value.
    * It is weak because spurious failures (e.g. random hardware failures) are ignored, for performance gain.
    <br>

6. **Code: In the folder `/lecture_2/assignment`.**

* What schedule produces the pattern on slide 18:

    * Should be achievable with `static` and `dynamic`, however in this case the `chunk_size` is too big. 