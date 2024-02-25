#include "Person.h"

Person::Person(const string& name, int age) : name(name), age(age) {}

string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}