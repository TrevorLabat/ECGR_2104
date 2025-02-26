// avergaes a list of numbers in an array 

#include "utils.h"
#include <iostream>

using namespace std;

int main() {
    int size = 5;
    double quizzes[] = {90.0,95.0,100.0,80.0,85.0}; // arrays are very dumb structures - sam shue (all the numbers are elements with an index)
    
    cout << average(quizzes, size) << endl; // accesses 0 index of the array

    return 0;
}



