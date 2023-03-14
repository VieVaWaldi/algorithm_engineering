# Exam Assignment 11

1. **What is Cython?**

    * Cython is a superset of Python that allows for easy integration with C or C++ code, and provides C-like performance with Python-like syntax.
    <br>

2. **Describe an approach how Python programs can be accelerated with the help of Cython.**

    * Python programs can be accelerated with the help of Cython by adding type declarations to Python code and compiling it into C extensions that can be executed at native speeds.
    * Variables can also be declared static, which also speeds up execution time.
    <br>

3. **Describe two ways for compiling a .pyx Cython module.**

    1. Using distutils: This involves creating a setup.py file that specifies the module and its dependencies, and running the command ```python setup.py build_ext --inplace``` to build the module.
    2. Using Cython's command-line compiler: This involves running the command ```cythonize -i mymodule.pyx``` to generate the C code from the Cython module, and then compiling the resulting C code using a C compiler such as gcc.
    <br>

4. **Name and describe two compiler directives in Cython.**

    1. ```cdef:``` This directive is used to declare C variables and functions that can be used within Cython code. It allows Cython code to directly call C functions and access C variables for improved performance.

    2. ```nogil:``` This directive is used to release the Global Interpreter Lock (GIL) in Cython code, which allows multiple threads to execute Python code simultaneously. This can significantly improve performance for CPU-bound tasks, but requires careful management of shared data to avoid race conditions.
    <br>

5. **What is the difference between def, cdef and cpdef when declaring a Cython function?**

    1. ```def:``` Is used to define a regular Python function that can be called from Python code.

    2. ```cdef:``` Is used to define a function with C data types that can be called from Cython code, but not from Python code directly.

    2. ```cpdef:``` Is used to define a function that can be called from both Python and Cython code, and includes both a ```def``` and a ```cdef``` version of the function. 
    <br>

6. **What are typed memoryviews especially useful for in Cython?**

    * Typed memoryviews are especially useful in Cython for working with multi-dimensional arrays, as they allow for efficient memory access and broadcasting of operations. They also provide compile-time type checking, which can help catch errors and improve code quality.
    <br>
