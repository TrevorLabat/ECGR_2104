#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

/*for (int i = removedIndex; i < 9; ++i) {  
    locations[i] = locations[i + 1];
    lat[i] = lat[i + 1];
    lon[i] = lon[i + 1];*/

double haversine(double lat1, double long1, double lat2, double long2, double radius);
double getFlightTime(double lat1, double long1, double lat2, double long2);
double radius = 3958.8;

int main() {

    string locations[] = {
        "Kozlov, Czech Republic", "Ostry Rohac, Slovakia", "Lungshan Temple, Taiwan", 
        "Panjakent Plaza Hotel, Panjakent, Tajikistan", "EPIC G287", 
        "Jennie Smoly Caruthers Biotechnology Building, Boulder CO","Jordanian Ministry of Interior, Amman, Jordan", 
        "3651 S Central Ave, Flagler Beach, FL", "Herbs 4 You, Denver, CO", "The house from Breaking Bad" 
    };

    double lat[] = {
        49.37842611514849, 49.20076581608594, 25.03715647388581, 39.491530688656354, 35.30904445167541, 40.00824369781749, 
        31.97859782421728, 29.42892985680383, 39.73030201457493, 35.12612396872518
    };

    double lon[] = {
        16.07886848388608, 19.758849582202195, 121.49991211159755, 67.58777131085009, -80.7416591917718, -105.24905851553281, 
        35.9067728090594, -81.10397930007397, -104.98666918961291, -106.53657913735432
    };

    string choice1; // choice as string
    string choice2;
    int number1; // choice as int
    int number2;
    
    cout << "Hello. This program calculates flight time between two locations.\n\nSelect a departure location:" << endl;

    for (int i = 0; i < 10; ++i) {
        cout << i + 1 << ". " << locations[i] << " " <<  lat[i] <<" " << lon[i] << endl;
    }
    
    getline(cin, choice1);
    number1 = atoi(choice1.c_str());

    while(true) {
        int num = 1;
        if (number1 <= 0 || number1 >10) {
            cout << "Please select a correct starting point." << endl;
            getline(cin, choice1);
            number1 = atoi(choice1.c_str());
        }
        else {
            cout << "Please select a destination." << endl; 
            for (int i = 0; i < 10; ++i) {
                //index of i is same as inxex of array but number is +1 
                if ((i != (number1 - 1))) {
                    cout << num << ". " << locations[i] << " " << lat[i] << " " << lon[i] << endl;
                    num += 1;
                }
            }
            break;
        }
    }
    
    getline(cin, choice2);
    number2 = atoi(choice2.c_str());

    while (number2 <= 0 || number2 >10) {
        cout << "Please select a correct destination point." << endl;
        getline(cin, choice2);
        number2 = atoi(choice2.c_str());
    }

    if(number2 >= number1){
        number2++;
    }

    double distance = haversine(lat[number1 - 1], lon[number1 - 1], lat[number2 - 1], lon[number2 - 1], radius);
    double avgFlightTime = getFlightTime(lat[number1 - 1], lon[number1 - 1], lat[number2 - 1], lon[number2 - 1]);

    cout << "Distance from " << locations[number1 - 1] << " to " << locations[number2 - 1] << " is " << distance << " miles." << endl;
    cout << "Average flight time is " << avgFlightTime << " min(s)" << endl; 
    return 0;
}

double haversine(double lat1, double long1, double lat2, double long2, double radius) {

    lat1 = lat1 * M_PI / 180.0;
    long1 = long1 * M_PI / 180.0;
    lat2 = lat2 * M_PI / 180.0;
    long2 = long2 * M_PI / 180.0; 
    double distance = 0; 

       distance = 2 * radius * asin(sqrt(pow(sin((lat2 - lat1)/2),2) + cos(lat1) * cos(lat2) * pow(sin((long2 - (long1))/2), 2)));

        return distance;
}

double getFlightTime(double lat1, double long1, double lat2, double long2) {

    int jetspeed = 500;

    lat1 = lat1 * M_PI / 180.0;
    long1 = long1 * M_PI / 180.0;
    lat2 = lat2 * M_PI / 180.0;
    long2 = long2 * M_PI / 180.0; 
    double distance = 0; 

    distance = 2 * radius * asin(sqrt(pow(sin((lat2 - lat1)/2),2) + cos(lat1) * cos(lat2) * pow(sin((long2 - (long1))/2), 2)));

    double avgFlightTime = (distance / jetspeed) * 60;

    return avgFlightTime;
}