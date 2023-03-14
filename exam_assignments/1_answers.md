# Exam Assignment 1

1. **Describe how parallelism differs from concurrency?**

    * Concurrency: Multiple tasks that can start, run and finish at overlapping times. They do not need a specific order. 
    * Parallelism: Multiple tasks that run at the exact same time on Hardware with multiple resources, e.g. multiple cores. 
    * Parallelism is a subset of Concurrency.
    <br>

2. **What is fork-join parallelism?**

    * This is a model, for threads to start and finish at specific barriers after certain tasks. 
    * The multiple threads "join" at the end of a parallel task and the code resumes sequentially.
    * Prohibits dispatched background threads.
    <br>

3. **One interesting thing from the Paper 'A Programmers Perspective':**

    * Memory Hierarchy:
    * The goal of a well designed memory hierarchy is to minimize access time.
    * It is mapped onto 4 levels, while the lower levels are generally faster and more expensive (in $) and the higher levels are generally slower, but cheaper.
    * A schematic as in the book can be seeen here, by a descending level: Register > Cache > RAM > DISK.
    * The hierarchy is divided into external and internal memory. The main characteristic being on which side of the bus the memory resides. For example a DISK is external, while a register is internal.
    * Data itself can exist on many levels, but is in fact only copied between two adjacent levels at a time.
    <br>

    * This could lead one to believe the data will not be there when the CPU needs it, but because of the concept of locality this is not a problem.
    * For example temporal locality says that recently accessed variables, like a counter in a for loop will be accessed again soon. So it can be saved to a memory close to the CPU.
    * Spatial locality refers to variables that are close to each other.These can also be kept in a lower level memory. 
    * Techniques like Load Value Prediction can optimize on those variables, to have them in the chache before the CPU can even ask for them.
    <br>

4. **Explanation to the figure 'Performance gains after Moores Law':**

    * Improvements to performance in the future will be a result of technologies from the top of the computing stack. Meaning that the performance gains until now were mainly a result of more transistors on a cpu, the bottom of the stack. Because of quantum jumping it is increasingly more difficult to decrease the size of the transistors, if they are to small the current can simply jump through them as if they were never there in the first place.
    * Performance Engineering (top of the stack), has the ability the increase performance by means of parallelism or more efficient algorithms. However, these are sporadic achievements. Therefore new theoretical models or programming paradigms like machine learning have to be used. Another low level way currently being used are specialized circuits. A lot of chip designs for modern computers/smartphones are increasingly more custom made. Improving performance in certain features like AI or image processing.
    <br>

    * Other concepts that can improve performance, which are still at the bottom of the stack, or use the whole stack:
        * Quantum computers (QC). It is hard to quantify when it will happen and how it will affect us. But some QC already beat normal pcs on specific problems. Google plans to reach quantum supremacy by 2030. In theory QC they are able to solve problems in minutes that would take todays computers years, if not longer.
        * Better CPU designs. CPU architecture can be improved upon, in some instances Machine Learning is and will be increasingly more important for better designs.
        * Compiler otimization. Probably to a lesser extent, because the compilers are already very advanced.
    <br>

5. **Code: In the folders `/1_lecture/warmup` and `/1_lecture/assignment`.**

