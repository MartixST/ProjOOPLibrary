#include <iostream>
#include "Author.h"
#include "Book.h"
#include "Librarian.h"
#include "Reader.h"

int main() {
    // Создание объектов классов Author, Book, Librarian, и Reader
    Author author1("John Doe", 45);
    Author author2("Jane Smith", 38);

    Book book1("The Great Adventure", "John Doe", 2020);
    Book book2("The Mystery of Life", "Jane Smith", 2021);
    Book book3("The Hidden Truth", "John Doe", 2022);
    Book book4("The Unseen World", "Jane Smith", 2023);

    Librarian librarian1("Alice", 30);
    Librarian librarian2("Bob", 35);

    Reader reader1("Charles", 25);
    Reader reader2("Diana", 28);

    // Добавление книг авторам
    author1.addBook(book1);
    author1.addBook(book3);
    author2.addBook(book2);
    author2.addBook(book4);

    // Заимствование книг читателями
    reader1.borrowBook(book1);
    reader1.borrowBook(book2);
    reader2.borrowBook(book3);
    reader2.borrowBook(book4);

    // Вывод информации о всех объектах
    author1.displayBooks();
    author2.displayBooks();

    librarian1.displayInfo();
    librarian2.displayInfo();

    reader1.displayInfo();
    reader2.displayInfo();

    // Возврат книг
    reader1.returnBook(book1);
    reader1.returnBook(book2);
    reader2.returnBook(book3);
    reader2.returnBook(book4);

    // Вывод информации о читателях после возврата книг
    reader1.displayInfo();
    reader2.displayInfo();

    return 0;
}