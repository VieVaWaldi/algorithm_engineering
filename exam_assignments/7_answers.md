# Exam Assignment 7

1. **Explain three vectorization clauses of your choice that can be used with #pragma omp simd.**

    * ```#pragma omp simd safelen(len)```: This clause specifies the maximum number of consecutive iterations that can be safely vectorized by the compiler. For example, ```#pragma omp simd safelen(8)``` indicates that the loop can be vectorized safely up to a length of 8 iterations. If the compiler determines that a longer vectorization length is safe, it may ignore the safelen clause. This clause can help to prevent vectorization of loops with data dependencies or irregular memory access patterns that may result in incorrect results.

    * ```#pragma omp simd aligned(list):``` This clause specifies a list of variables or arrays that must be aligned in memory for vectorization to be performed. For example, ```#pragma omp simd aligned(x, y)``` indicates that the variables x and y must be aligned in memory for the loop to be vectorized. This clause can improve performance by ensuring that data is loaded and stored efficiently from memory.

    * ```#pragma omp simd simdlen(len)```: This clause specifies the preferred vectorization length for the loop. For example, ```#pragma omp simd simdlen(16)``` indicates that the compiler should attempt to vectorize the loop using a length of 16 iterations. The actual vectorization length may be smaller or larger than the specified length, depending on the characteristics of the loop and the available hardware. This clause can help to optimize the performance of the loop for specific hardware architectures.
    <br>

2. **Give reasons that speak for and against vectorization with intrinsics compared to guided vectorization with OpenMP.**

    * Intrinsic functions allow for fine-grained control over the generated SIMD code, allowing developers to customize the code for specific hardware architectures and application requirements. -> As a comparison guided vectorization provides less control and even some performance overhead, because the compiler must analyze it first.
    * The problem with intrinsics is their low portability as they depend on the specific architecture. This also makes it more diffult to maintain the code base. Furthermore the developer must deal with the high complexities by manually managing the vector registers which is more error prone. -> Guided vectorization does not have to deal with this problems.
    <br>

3. **What are the advantages of vector intrinsics over assembly code?**

    * Intrinsics are more portable than assembly code.
    * Intrinsics also provide a higher level abstraction, making it easier to maintain the code compared to assembly.
    * Intrinsics are a bit easier in comparison.
    * And intrinsics are designed to be safer and more reliable with built in checks for data alignment and memory access violations.
    <br>

4. **What are the corresponding vectors of the three intrinsic data types: __m256, __m256d and __m256i.**

    * **__m256:** A vector of 8 floats.
    * **__m256d:** A vector of 4 double mumbers.
    * **__m256i:** A vector of either signed or unsigned integers.
    