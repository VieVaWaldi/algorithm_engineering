# Exam Assignment 6

1. **Name some characteristics of the instructions sets: SSE, AVX(2) and AVX-512.**

    * **SSE:** This is a SIMD (single instruction multiple data) instruction set as an extension for the x86 architecture. It contains 70 instructions which can increase performance is exactly the same instructions are used on multiple data objects.

    * **AVX:** This is also an extension to the x86 architecture from Intel for micro processors. 

    * **AVX2:** This as the name suggests is the extension for the AVX instruction set. It extends vector integers from SSE and AVX to 256 bits and enables vector elements to be loaded from non contigous memory locations.

    * **AVX-512:** This is another extension that increases the bits for advanced vector extensions to 512 bits. The number of registers is increased from 16 to 32 bits and it makes multiple extensions that can be implemented independently possible.

    <br>

2. **How can memory aliasing affect performance?**

    * Memory aliasing occurs when multiple pointers refer to the same memory location, for example when two or more variables are assigned the same address in memory. 
    * Problems might occur when cached in multiple levels of the memory hierarchy and must be moved in between caches. That is called cache trashing. 
    * This can also hinder the compiler from doing optimizations.
    <br>

3. **What are the advantages of unit stride (stride-1) memory access compared to accessing memory with larger strides (for example, stride-8)?**

    * Unit stride memory access allows for easier vectorization and increases cache locality, meaning the data is more likely to be cached which in turn can result in faster memory access times. 
    <br>

4. **When would you prefer arranging records in memory as a Structure of Arrays?**

    * If some fields of the record are more compressible than others, SoA can allow for more efficient compression by compressing each field separately, SoA can allow for more efficient use of SIMD vector instructions. SIMD vectorization can be important for applications that require high performance.
    * If the fields of the record are processed independently by multiple threads, SoA can allow for more efficient parallelization by avoiding false sharing and cache contention.
    