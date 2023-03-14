# Exam Assignment 9

1. **How do bandwidth-bound computations differ from compute-bound computations?**

    * Bandwidth-bound computations are those in which the amount of data that needs to be transferred between memory and the processor is the main bottleneck, while the computation itself is relatively simple. C
    * Compute-bound computations are those in which the main bottleneck is the processing power of the processor, and the amount of data transfer is relatively small.
    <br>

2. **Explain why temporal locality and spatial locality can improve program performance.**

    * Temporal locality refers to the tendency of a program to access the same data multiple times over a short period of time. Spatial locality refers to the tendency of a program to access data that is physically close to other data that has been accessed recently. By exploiting these types of locality, programs can reduce the amount of time spent waiting for data to be fetched from memory or cached, which can significantly improve performance.
    <br>

3. **What are the differences between data-oriented design and object-oriented design?**

    * Data-oriented design focuses on organizing data for optimal performance, while object-oriented design focuses on encapsulating data and behavior into objects. Data-oriented design prioritizes efficient memory access and cache utilization, while object-oriented design prioritizes abstraction and encapsulation.
    <br>

4. **What are streaming stores?**

    * Streaming stores are a type of memory store operation that bypasses the cache and writes directly to main memory. This can be useful for applications that generate large amounts of data that do not need to be immediately reused, such as video or audio processing.
    <br>

5. **Describe a typical cache hierarchy used in Intel CPUs.**

    * A typical cache hierarchy in Intel CPUs consists of three tiered levels: L1, L2, and L3. L1 cache is the smallest and fastest cache, located closest to the processor cores, while L3 cache is the largest and slowest cache, shared among all cores.
    <br>

6. **What are cache conflicts?**

    * Cache conflicts occur when multiple memory addresses map to the same cache line in a cache set. This can cause performance degradation because it increases the frequency of cache evictions and can result in unnecessary memory access.
