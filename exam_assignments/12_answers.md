# Exam Assignment 12

1. **What are extension types in the context of Python?**

    * Extension types in Python are custom Python objects that are implemented in C or C++. They can be used to create Python objects with specialized behavior or performance characteristics that cannot be achieved using pure Python. Extension types can be defined using tools such as Cython or SWIG, and are typically used for performance-critical tasks such as numerical computations or interfacing with low-level system APIs. 
    <br>

2. **How do extension types data fields in Cython differ from data fields in Python classes?**

    * Extensions allow two things that are not possible in python. Calling C functions and system calls and implementing new built in object types. 
    <br>

3. **Give a simple description of how to wrap C / C++ code in Cython.**

    1. First we specify the C or CPP language in a ```setup.py```.
    2. Then we create a ```.pxd``` file with ```cdef extern``` blocks.
    3. These blocks should define classes as a ```cdef cppclas```. And variables, the methods and a constructor.
    4. To finish we can use ```cimport``` to import them in an extension module.
    <br>
