//
// Created by Radek on 19.06.2024.
//

#include "ShoppingBasket.h"

ShoppingBasket::~ShoppingBasket() {
    for (const auto &item : items) {
        delete item;
    }
    items.clear();
}

template<>
void ShoppingBasket::addItem<GroceryItem>(const GroceryItem item) {
    items.push_back(new GroceryItem(item));
}

template<>
void ShoppingBasket::addItem<ElectronicsItem>(const ElectronicsItem item) {
    items.push_back(new ElectronicsItem(item));
}

template<>
void ShoppingBasket::addItem<ClothingItem>(const ClothingItem item) {
    items.push_back(new ClothingItem(item));
}

void ShoppingBasket::displayItems() {
    for (const auto &item : items) {
        item->print();
    }
}

double ShoppingBasket::getTotalPrice() const {
    double d = 0.0;
    for (auto &g : items) {
        d += g->price;
    }
    return d;
}

void ShoppingBasket::sortByName() {
    std::sort(items.begin(), items.end(), [](const Item *i1, const Item *i2) { return i1->name < i2->name; });
}

void ShoppingBasket::sortByPrice() {
    std::sort(items.begin(), items.end(), [](const Item *i1, const Item *i2) { return i1->price < i2->price; });
}