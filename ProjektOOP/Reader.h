#pragma once
#include "LibraryMember.h"
#include "Book.h"
#include <vector>

using namespace std;

class Reader : public LibraryMember {
public:
    Reader(const string& name, int age);
    void borrowBook(const Book& book);
    void returnBook(const Book& book);
    void displayInfo() const override;
private:
    vector<Book> borrowedBooks;
};