#pragma once
#include "Person.h"

using namespace std;

class LibraryMember : public Person {
public:
    LibraryMember(const string& name, int age);
    virtual void displayInfo() const = 0;
};