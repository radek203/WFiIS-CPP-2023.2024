//
// Created by Radek on 18.06.2024.
//

#include "BookManager.h"

#include <utility>

Book::Book(std::string _title, std::string _author, const int _year, const double _price) : title(std::move(_title)), author(std::move(_author)), year(_year), price(_price) {

}

bool Book::operator<(const Book &book) const {
    return title < book.title;
}

void BookManager::addBook(const std::string &_title, const std::string &_author, const int _year, const double _price) {
    books.emplace_back(_title, _author, _year, _price);
}

void BookManager::displayAllBooks() {
    for (auto &book : books) {
        displayBook(book);
    }
}

void BookManager::sortBooksByTitle() {
    std::sort(books.begin(), books.end(), std::less<>());
}

Book *BookManager::findBookByTitle(const std::string &_title) {
    const auto b = std::find_if(books.begin(), books.end(), [&](const Book &book) { return book.title == _title; });
    if (b == books.end()) {
        return nullptr;
    }
    return &(*b);
}

void BookManager::removeBook(const std::string &_title) {
    Book *book = findBookByTitle(_title);
    if (book) {
        books.erase(std::remove_if(books.begin(), books.end(), [&](const Book &b) { return b.title == book->title; }), books.end());
    }
}

void displayBook(const Book &book) {
    std::cout << "Title: " << book.title << ", Author: " << book.author << ", Year: " << book.year << ", Price: " << book.price << std::endl;
}