#include <iostream>
#include "Reader.h"

Reader::Reader(const string& name, int age) : LibraryMember(name, age) {}

void Reader::borrowBook(const Book& book) {
    borrowedBooks.push_back(book);
}

void Reader::returnBook(const Book& book) {
    borrowedBooks.erase(remove(borrowedBooks.begin(), borrowedBooks.end(), book), borrowedBooks.end());
}

void Reader::displayInfo() const {
    cout << "Reader: " << getName() << ", " << getAge() << " years old" << endl;
    cout << "Borrowed books:" << endl;
    for (const auto& book : borrowedBooks) {
        cout << book.getTitle() << " by " << book.getAuthor() << endl;
    }
    cout << endl;
}