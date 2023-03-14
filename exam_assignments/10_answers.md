# Exam Assignment 10

1. **Name and explain some useful compiler flags during development.**

    * ```-Wall``` This enables all warning messages from the compiler.
    * ```-g``` This enables debugging information to be generated, which enables debugging. Coding without debugging is no real coding.
    * ```-Og``` This optimizes debugging by enabling all optmizations that do not conflict with debugging and improves performance during debugging.
    <br>

2. **How could Intel oneAPI help you write better programs?**

    * Intel oneAPI can help you write better programs by providing a comprehensive set of tools and libraries for parallel programming, including support for CPUs, GPUs, and other accelerators. This can help improve performance, reduce development time, and enable easier portability across different platforms.
    <br>

3. **What can we learn from the following quote? Premature optimization is the root of all evil (Donald Knuth).**

    * Pesonally i prefer to start a project by writing messy code that works. It helps one solve the problem at hand while one can think about possible optimizations at the same time.
    * The seconds step would build the project again, but highly modularized, readable and easy to maintain. 
    * Once the code works optimizations can be done where necessary without having to worry about solving the underlying problem anymore. And without breaking the working code.
    * This should speed up development and help one figure out where and how much optimization is needed.
    * At least these were my thought to that quote.
    <br>
