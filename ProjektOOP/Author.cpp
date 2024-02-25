#include <iostream>
#include "Author.h"

Author::Author(const string& name, int age) : Person(name, age) {}

void Author::addBook(const Book& book) {
    books.push_back(book);
}

void Author::displayBooks() const {
    cout << "Books by " << getName() << ":" << endl;
    for (const auto& book : books) {
        cout << book.getTitle() << ", " << book.getYear() << endl;
    }
    cout << endl;
}