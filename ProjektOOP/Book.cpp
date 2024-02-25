#include "Book.h"

Book::Book(const string& title, const string& author, int year) : title(title), author(author), year(year) {}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}

bool operator==(const Book& lhs, const Book& rhs) {
    return lhs.getTitle() == rhs.getTitle() &&
        lhs.getAuthor() == rhs.getAuthor() &&
        lhs.getYear() == rhs.getYear();
}