#include <iostream>
#include "Librarian.h"

Librarian::Librarian(const string& name, int age) : LibraryMember(name, age) {}

void Librarian::displayInfo() const {
    cout << "Librarian: " << getName() << ", " << getAge() << " years old" << endl << endl;
}