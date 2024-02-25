#pragma once
#include <string>

using namespace std;

class Book {
public:
    Book(const string& title, const string& author, int year);
    string getTitle() const;
    string getAuthor() const;
    int getYear() const;
private:
    string title;
    string author;
    int year;
};

bool operator==(const Book& lhs, const Book& rhs);