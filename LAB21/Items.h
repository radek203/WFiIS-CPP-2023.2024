//
// Created by Radek on 19.06.2024.
//

#ifndef ITEMS_H
#define ITEMS_H

#include <iostream>

class Item {
protected:
    std::string name;
    double price;
public:
    virtual ~Item() = default;

    Item(const std::string &_name, double _price);
    virtual void print() = 0;

    friend class ShoppingBasket;
};

class GroceryItem final : public Item {
public:
    GroceryItem(const std::string &_name, double _price);
    void print() override;
};

class ElectronicsItem final : public Item {
    int guarantee;
public:
    ElectronicsItem(const std::string &_name, double _price, int _guarantee);
    void print() override;
};

class ClothingItem final : public Item {
    std::string size;
public:
    ClothingItem(const std::string &_name, double _price, std::string _size);
    void print() override;
};

#endif //ITEMS_H
