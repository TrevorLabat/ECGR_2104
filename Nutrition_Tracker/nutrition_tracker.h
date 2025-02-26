#ifndef nutrition_tracker_H
#define nutrition_tracker_H
#include <iostream>
using namespace std;

class FoodItem {

    public:
    string getName() const;
    double getEnergy() const;
    double getFat() const;
    double getSugar() const;
    double getprotein() const;
    double getSodium() const;
    FoodItem operator+(FoodItem amount);
    void Print() const;

    FoodItem(double energy, double fat, double sugar, double protein, double sodium, string name);
    FoodItem();

    private:
    double energy;
    double fat;
    double sugar;
    double protein;
    double sodium;
    string name;
};

class TotalAmount {
    public:

    private:
    double totalEnergy = 0;
    double totalFat = 0;
    double totalSugar = 0;
    double totalprotein = 0;
    double totalSodium = 0;
    string totalName ;
};

#endif