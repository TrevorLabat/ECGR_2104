#include<iostream>
#include<vector>
using namespace std;

class Employee {
    public:
    Employee(string name, string title, double wage);
    Employee();

    void print() const;
    void setName(string userName);
    string getName() const;
    void setJobTitle(string jobTitle);
    void setWage(double userWage);
    int getWage();

    private:
    string name;
    string title;
    double wage;

};

Employee::Employee(string name, string title, double wage){
    this->name = name;
    this->title = title;
    this->wage = wage;
}

Employee::Employee(){
    this->name = "Unnamed";
    this->title = "Unspecified";
    this->wage = -1;
}

void Employee::print() const {
    cout << name << " " << title << " " << wage << endl;
}
void Employee::setName(string userName) {
    name = userName;
}

string Employee::getName() const {
    return name;
}
void Employee::setJobTitle(string jobTitle) {
    title = jobTitle;
}

void Employee::setWage(double userWage) {
    wage = userWage;
}
int Employee::getWage() {
    return wage;
}


int main() {
    int choice = 0;
    int hours = 0;
    int totalWage = 0;

    

    Employee one("Bob", "Engineer", 20);
    //one.setName("Bob");
    //one.setJobTitle("Engineer");
    //one.setWage(20);

    Employee two;
    two.setName("tom");
    two.setJobTitle("Sky Diver");
    two.setWage(1);

    Employee three;
    three.setName("rob");
    three.setJobTitle("Acountant");
    three.setWage(10);

    Employee four;
    four.setName("tod");
    four.setJobTitle("Teacher");
    four.setWage(5);

    Employee five;
    five.setName("moe");
    five.setJobTitle("President");
    five.setWage(100);

    vector<Employee> v;
    v.push_back(one);
    v.push_back(two);
    v.push_back(three);
    v.push_back(four);
    v.push_back(five);
    //v.push_back(Employee("Bob2", "Janitor", 10));

    cout << "This program tracks employees data." << endl;
    cout << "1. Print a list of employees" << endl;
    cout << "2. Calculate total wages" << endl;
    cout << "3. Exit application" << endl;
   

    cin >> choice;
    if(choice == 1) {

        for(int i = 0; i < v.size(); i++){
            v.at(i).print();
        }
    }
    else if(choice == 2) {
        cout << "enter total number of hours worked per employee:" << endl;
        for(int i = 0; i < v.size(); ++i) {
            cout << "How many hours did " << v.at(i).getName() << ":" << endl;
            cin >> hours;
            totalWage = totalWage +  hours * v.at(i).getWage();
        }
        cout << "Total emplyee payment " << totalWage << endl;

        /*
        cout << "How much did " << one.getName() << "work" << endl;
        cin >> hours;
        totalWage = totalWage +  hours * one.getWage();

        cout << "How much did " << two.getName() << "work" << endl;
        cin >> hours;
        totalWage = totalWage +  hours * two.getWage();
        */

    }
    else if(choice == 3) {
        cout << "Bye";
        return 0;
    }
    else {
        cout << "Bye";
        return 0;
    }



    return 0;
}