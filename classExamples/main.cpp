#include <iostream>
#include <vector>

using namespace std;

class Student { //all student properties in a class a class is a object, custon data type that bundled stuff together in one thing
    public:
    string name;
    int id;

   Student(){ //constructor
        cout << "Constructor clalled!" << endl;
        name = " ";
        gpa = 4.0;
        id = -1;
    }

    Student(string n ,int i, double g) : name(n), id(i) { //the :name(n) and id(i) intitalized the variables, another option vs doing what is commented out below
        cout << "overloaded constructor" << endl;
        //name = n;
        //id = i;
        setGpa(g);
    }



    void computeGpa(double grades[], int num_grades){
        double avg = 0.0;
        for(int i = 0; i < num_grades; i++){
            avg = avg + grades[i];
        }
        avg = avg / num_grades;
        gpa = avg;
    }

    void setGpa(double g){
        if(g <= 4.0 && g >= 0.0){
            gpa = g+1;
        } else {
            cout << "Invalid GPA!" << endl;
            gpa = -1.0;
        }
    }
    
    double getGpa() const {
        return gpa;
    }

    private:
    double gpa;

    
};

int main(){

    double grades_s[] = {3.0, 2.0, 2.0};
    Student s;
    s.name = "Sam";
    s.computeGpa(grades_s, 3);
    s.id = 801234456;

    Student s2("bob", 801240976, 4.0 );
    //s2.name = "Bob";
    //s2.setGpa(8.0);
    //s2.id = 801231285;
    
    
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "GPA: " << s.getGpa() << endl;

    cout << "Name: " << s2.name << endl;
    cout << "ID: " << s2.id << endl;
    cout << "GPA: " << s2.getGpa() << endl;

    vector<Student> student_database;
    student_database.push_back(s);
    student_database.push_back(s2);

    /*
    vector<string> names = {"Sam", "Bob", "Joe", "Bob2"};
    vector<double> gpas = {2.5, 3.4, 4.0, 2.3};
    vector<int> ids = {800123456, 801456789, 801224556};

    for(int i = 0; i < names.size(); i++){
        cout << "Name: " << names[i] << endl;
        cout << "ID: " << ids[i] << endl;
        cout << "GPA: " << gpas[i] << endl;
    }
    */
    return 0;
}