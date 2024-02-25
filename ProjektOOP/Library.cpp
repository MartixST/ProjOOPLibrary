#include <iostream>
#include "Library.h"

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::addMember(LibraryMember* member) {
    members.push_back(member);
}

void Library::displayBooks() const {
    for (const auto& book : books) {
        cout << book.getTitle() << " by " << book.getAuthor() << ", " << book.getYear() << endl;
    }
}

void Library::displayMembers() const {
    for (const auto& member : members) {
        member->displayInfo();
    }
}