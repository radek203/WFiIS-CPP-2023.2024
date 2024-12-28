//
// Created by Radek on 18.06.2024.
//

#ifndef BOOKMANAGER_H
#define BOOKMANAGER_H

#include <iostream>
#include <vector>
#include <algorithm>

class Book {
    std::string title;
    std::string author;
    int year;
    double price;
public:
    Book(std::string _title, std::string _author, int _year, double _price);

    bool operator<(const Book &book) const;

    friend void displayBook(const Book &book);

    friend class BookManager;
};

class BookManager {
    std::vector<Book> books = {};
public:
    void addBook(const std::string &_title, const std::string &_author, int _year, double _price);
    void displayAllBooks();
    void sortBooksByTitle();
    Book *findBookByTitle(const std::string &_title);
    void removeBook(const std::string &_title);
};


#endif //BOOKMANAGER_H
