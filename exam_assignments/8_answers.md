# Exam Assignment 8

1. **Explain the naming conventions for intrinsic functions. (_<vector_size>_<operation>_<suffix>)**

    * **<vector_size>:** Refers to the size of the SIMD vector, expressed in bits or bytes.
    * **<operation>:** Refers to the operation that the intrinsic function performs (eg add or substract).
    * **<suffix>:** Refers to information about the data type of the operations arguments.
    <br>

2. **What do the metrics latency and throughput tell you about the performance of an intrinsic function?**

    * **<latency>:** This can be used to measure the performance of a single instruction by providing the number of cycles.
    * **<throughput>:** This refers to the amount of work that can be completed per unit of time, by providing the number of cycles it takes for the next instrinsic to start. 
    <br>

3. **How do modern processors realize instruction-level parallelism?**

    * This refers to the ability to execute multiple instructions in parallel to improve performance. This is done for example by using pipelining that breaks down the execution of instructions into multiple stages, allowing multiple instructions to be in different stages of execution at the same time.
    <br>

4. **How may loop unrolling affect the execution time of compiled code?**

    * Loop unrolling omits the overhead of a loop, possibly leading to slighlty increased execution times. However compilation takes longer in that case.

5. **What does a high IPC value (instructions per cycle) mean in terms of the performance of an algorithm?**

    * IPC refers to the amount of work that can be done by a CPU in one cycle. The higher the IPC the more work can be done.
    