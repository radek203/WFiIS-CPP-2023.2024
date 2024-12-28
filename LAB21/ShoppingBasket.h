//
// Created by Radek on 19.06.2024.
//

#ifndef SHOPPINGBASKET_H
#define SHOPPINGBASKET_H

#include "Items.h"
#include <vector>
#include <algorithm>

class ShoppingBasket {
    std::vector<Item*> items = {};
public:
    ~ShoppingBasket();
    template<typename T>
    void addItem(const T item) {}
    void displayItems();
    double getTotalPrice() const;
    void sortByName();
    void sortByPrice();
};

template<>
void ShoppingBasket::addItem<GroceryItem>(const GroceryItem item);

template<>
void ShoppingBasket::addItem<ElectronicsItem>(const ElectronicsItem item);

template<>
void ShoppingBasket::addItem<ClothingItem>(const ClothingItem item);

#endif //SHOPPINGBASKET_H
