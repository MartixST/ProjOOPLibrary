#pragma once
#include <vector>
#include "Book.h"
#include "LibraryMember.h"

using namespace std;

class Library {
public:
    void addBook(const Book& book);
    void addMember(LibraryMember* member);
    void displayBooks() const;
    void displayMembers() const;
private:
    vector<Book> books;
    vector<LibraryMember*> members;
};