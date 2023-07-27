// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(const std::string &name, int age);

    std::string getName() const;
    int getAge() const;

    std::string greet();

private:
    std::string name;
    int age;
};

#endif //PERSON_H
