#pragma once
#include "Person.h"
#include "Book.h"
#include <vector>

using namespace std;

class Author : public Person {
public:
    Author(const string& name, int age);
    void addBook(const Book& book);
    void displayBooks() const;
private:
    vector<Book> books;
};