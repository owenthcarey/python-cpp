# Python-C++ Extension Using Pybind11

This repository demonstrates how to create a Python extension module using C++
and Pybind11.

The C++ code defines a `Person` class with `name` and `age` attributes, as well
as getter methods for these attributes and a `greet` method. The Python
extension module exposes this `Person` class to Python.

## Dependencies

- Python 3.x
- C++ compiler with C++11 or later support
- [pybind11](https://github.com/pybind/pybind11)
