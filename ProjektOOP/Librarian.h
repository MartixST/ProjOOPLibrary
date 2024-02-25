#pragma once
#include "LibraryMember.h"

using namespace std;

class Librarian : public LibraryMember {
public:
    Librarian(const string& name, int age);
    void displayInfo() const override;
};