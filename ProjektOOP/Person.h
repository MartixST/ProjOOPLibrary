#pragma once
#include <string>

using namespace std;

class Person {
public:
    Person(const string& name, int age);
    string getName() const;
    int getAge() const;
private:
    string name;
    int age;
};