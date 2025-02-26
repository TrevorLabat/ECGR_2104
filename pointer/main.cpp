#include <iostream>
void swap(int* x, int* y);

//pointers are a variable type that point to another variable
int main() {

    int x = 5;
    int* p;
    p = &x;  //pointer p holds the address to x, &x gets the address of x
    std::cout << *p << std::endl; //*p dereferences the pointer p and preforms a task on the variable it points to
    std::cout << p << " this is the address of the int x" << std::endl; // without dereferencing, the address of the variable the pointer points towards is instead output

    *p = 10;    //again, defrencing the pointer p so that 10 is assigned to x

    std::cout << x << std::endl;

    int a = 3;
    int b = 6;
    std::cout << "swapping" << std::endl;
    swap(&a,&b); //a pointer must be assigned an address
    std::cout << a << " " << b << std::endl; 



    int array[5] = {1, 2, 3, 4, 5};

    std::cout << array << " this is the address of the first index of the array" << std::endl;
    std:: cout << (array + 1) << " this is the address of the second index of the array" << std::endl;
    std:: cout << *(array + 1) << " this is the data at the second index of the array" << std::endl;

    // a int is 4 bytes, so really array + 1 is array + 4 in memory

}

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

