/* to run program in terminal, first build the program with command "g++ -o test.exe" then run executable 
with command "./ test.exe" */


using namespace std;
#include <iostream>

/*global var is a waste of memory becasue it is always there use sparingly,
in this example it is justified because pi is used everywhere*/
const double PI = 3.14; 


double circleArea(double r); //function prototype
double cylinderVolume(double r, double length); //function prototype

int main() {
    double r = 2.5;
    
    double area = circleArea(r);

    cout << "Area of the circle is " << area << endl;

    double r2 = 10.699;
    double length = 5;
    double volume = cylinderVolume(r2, length);

    cout << "Area of the cylinder is " << volume << endl;
    

}

double cylinderVolume(double r, double length) {
    
    double volume = circleArea(r) * length;
    return volume;
}

double circleArea(double r){
    
    double area = PI*r*r;
    return area;
}

double sphereVolume(double r){
    
    double volume = (4.0/3.0) * PI * r * r;

}