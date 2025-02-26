#include "nutrition_tracker.h"


FoodItem FoodItem::operator+(FoodItem amount) {
    FoodItem totalAmount;
    totalAmount.energy = energy + amount.getEnergy();
    totalAmount.fat = fat + amount.getFat();
    totalAmount.sugar = sugar + amount.getSugar();
    totalAmount.protein = protein + amount.getprotein();
    totalAmount.sodium = sodium + amount.getSodium();
    return totalAmount;
}

double FoodItem::getEnergy() const {
    return energy;
}
double FoodItem::getFat() const {
    return fat;
}
double FoodItem::getSugar() const {
    return sugar;
}
double FoodItem::getprotein() const {
    return protein;
}
double FoodItem::getSodium() const {
    return sodium;
}
string FoodItem::getName() const {
    return name;
}
FoodItem::FoodItem(double energy, double fat, double sugar, double protein, double sodium, string name) {
    this->energy = energy;
    this->fat = fat;
    this->sugar = sugar;
    this ->protein = protein;
    this->sodium = sodium;
    this->name = name;
}
FoodItem::FoodItem() {
    energy = 0;
    fat = 0;
    sugar = 0;
    protein = 0;
    sodium = 0;
    name = "unknown";
}
void FoodItem::Print() const {
    cout << "Energy: " << energy << " Fat: " << fat << " Sugar: " << sugar << " protein: " << protein << " Sodium: " << sodium << endl;
}