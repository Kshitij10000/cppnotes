#include <iostream>
#include <string>
using namespace std;

// ====================================
// Class: Person
// ====================================
class Person {
    public:
        string name;
        int age;

        // Default Constructor
        Person() {
            cout << "Parent default constructor....\n";
        };

        // Parameterized Constructor
        Person(string name, int age) {
            this->name = name;
            this->age = age; 
            cout << "Parent parameterized constructor....\n"; // Added
        }
};

// ====================================
// Class: Student (Derived from Person)
// ====================================
class Student : public Person {
    public:
        int rollno;
        
        // Default Constructor
        Student(){
            cout << "Student default constructor....\n";
        };

        // Parameterized Constructor for Student
        Student(string name, int age, int rollno) : Person(name, age) {
            this->rollno = rollno;
            cout << "Student parameterized constructor....\n"; // Added
        }

        // Member Function to Display Information
        void getInfo() {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Roll No : " << rollno << endl;
        }
};

// ====================================
// Main Function
// ====================================
int main() {
    // Creating a Student object with required parameters
    Student s1("kshitj sarve", 22, 2021000555);

    // Displaying Student Information
    s1.getInfo();

    return 0;
};
