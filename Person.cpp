// Person.cpp
#include "Person.h"

Person::Person(const std::string &name, int age) : name(name), age(age) {}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

std::string Person::greet() {
    return "Hello, my name is " + name + " and I'm " + std::to_string(age) + " years old.";
}
