#include <iostream>
#include <vector>
#include "nutrition_tracker.h"
using namespace std;



int main() {
    int choice = 0;
    
    FoodItem apple(100,.3,19,.5,.002,"Apple");
    FoodItem pizzaSlice(300, 9, 3, 10, .6, "Pizza Slice");
    FoodItem banana(150, 1, 12, 1, .001, "Banana");
    FoodItem burger(250, 15, 4, 8, 0.8, "Burger");
    FoodItem ChickenBreast(165, 3.6, 0, 31, 0.07, "Chicken Breast");
    FoodItem FrenchFries(365, 17, 0.3, 3.4, 0.2, "French Fries");
    FoodItem Salad(50, 0.5, 2, 1, 0.01, "Salad");
    FoodItem Soda12oz(150, 0, 39, 0, 0.03, "12 oz Soda");
    FoodItem IceCream(200, 11, 21, 3, 0.08, "Ice Cream");
    FoodItem Steak(250, 15, 0, 26, 0.07, "Steak");

    vector<FoodItem> food_database;

    food_database.push_back(apple);
    food_database.push_back(pizzaSlice);
    food_database.push_back(banana);
    food_database.push_back(burger);
    food_database.push_back(ChickenBreast);
    food_database.push_back(FrenchFries);
    food_database.push_back(Salad);
    food_database.push_back(Soda12oz);
    food_database.push_back(IceCream);
    food_database.push_back(Steak);
    

    for(int i = 1; i <= 10; ++i) {
        cout << i << ". " << food_database.at(i - 1).getName() << endl;
    }
    cout << "Enter a number >= 11 to stop selecting" << endl;
    
    cin >> choice;
    if(choice >= 11) {
        return 0;
    }
    FoodItem total = food_database.at(choice - 1);
    
    cout << food_database.at(choice - 1).getName() << " Selected!" << endl;
    while(choice != 11) {
        
        cin >> choice;
        if(choice >= 11) {
            break;
        }
        
        total = total + food_database.at(choice - 1);
       
        cout << food_database.at(choice - 1).getName() << " Selected!" << endl;
        
        
    }
    total.Print();
    return 0;
}