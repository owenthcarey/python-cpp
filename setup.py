# setup.py
from setuptools import setup, Extension
import pybind11

tutorial_module = Extension(
    "tutorial",
    ["bindings.cpp", "Person.cpp"],
    include_dirs=[pybind11.get_include()],
    language="c++",
    extra_compile_args=["-std=c++11"],
)

setup(
    name="tutorial",
    version="0.0.1",
    author="Your Name",
    author_email="your.email@example.com",
    description="A test project using pybind11",
    long_description="",
    ext_modules=[tutorial_module],
    zip_safe=False,
)
