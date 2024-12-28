//
// Created by Radek on 19.06.2024.
//

#include "Items.h"

Item::Item(const std::string &_name, const double _price) : name(_name), price(_price) {

}

GroceryItem::GroceryItem(const std::string &_name, const double _price) : Item(_name, _price) {

}

void GroceryItem::print() {
    std::cout << "Produkt spozywczy: " << name << ", Cena: zl " << price << std::endl;
}

ElectronicsItem::ElectronicsItem(const std::string &_name, const double _price, const int _guarantee) : Item(_name, _price), guarantee(_guarantee) {

}

void ElectronicsItem::print() {
    std::cout << "Produkt elektroniczny: " << name << ", Cena: zl " << price << ", Gwarancja: " << guarantee << " miesiace" << std::endl;
}

ClothingItem::ClothingItem(const std::string &_name, const double _price, std::string _size) : Item(_name, _price), size(std::move(_size)) {

}

void ClothingItem::print() {
    std::cout << "Odziez: " << name << ", Cena: zl " << price << ", Rozmiar: " << size << std::endl;
}