# Exam Assignment 5

1. **What is CMake?**

    * CMake is a cross platform tool that automizes the build process, installation and even testing. On running it succesfully a Makefile is created to compile the programm, therefore Cmake only creates the necessary build files. 
    <br>

2. **What role do targets play in CMake?**

    * Targets are a concept used to represent the build artifacts produced during the build process like executables, libraries and object files. Targets allow for the specification of dependencies between different parts of the project and how they should be built by creating a dependecy graph.
    <br>

3. **How would you proceed to optimize code?**

    * We can optmize code by search for bottlenecks using profiling using tools like valgrind. For specific already solved algorithms there are usually also improvements that one could implement. And of course by using openmp to parallelize loops or to use vectorization.