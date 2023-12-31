// bindings.cpp
#include <pybind11/pybind11.h>
#include "Person.h"

namespace py = pybind11;

PYBIND11_MODULE(tutorial, m) {
    py::class_<Person>(m, "Person")
        .def(py::init<const std::string &, int>())
        .def("greet", &Person::greet)
        .def("get_name", &Person::getName)
        .def("get_age", &Person::getAge)
        .def("__repr__", &Person::repr);
}
