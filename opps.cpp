#include <iostream>
#include <string>
using namespace std;

// ====================================
// Class: Teacher
// ====================================

class Teacher{

    private:
        // ------------------------------------
        // Encapsulation: Private Member
        // - 'salary' is a private attribute
        //   Accessible only within the Teacher class
        // ------------------------------------
        double salary;

    public:
        // ------------------------------------
        // Encapsulation: Public Attributes
        // - 'name', 'dept', and 'subject' are public attributes
        //   Accessible from outside the class
        // ------------------------------------
        string name;
        string dept;
        string subject;
        
        // ------------------------------------
        // Encapsulation: Public Method
        // - 'changeDept' allows modification of 'dept'
        // ------------------------------------
        void changeDept(string newDept){
            dept = newDept;
        }
        
        // ------------------------------------
        // Setter Method
        // - 'setSalary' sets the value of the private member 'salary'
        // ------------------------------------
        void setSalary(double s){
            salary = s;
        }

        // ------------------------------------
        // Getter Method
        // - 'getSalary' retrieves the value of the private member 'salary'
        // ------------------------------------
        double getSalary() {
            return salary;
        }
    
        // ------------------------------------
        // Member Function
        // - 'printinfo' displays the teacher's information
        // ------------------------------------
        void printinfo() {
            cout << "Teacher Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Dept: " << dept << endl;
            cout <<"Salary: "<< getSalary() << endl;
        }

};

// ====================================
// Main Function
// ====================================

int main() {
    // ------------------------------------
    // Object Instantiation
    // - Creating an instance of the Teacher class
    // ------------------------------------
    Teacher t1;

    // ------------------------------------
    // Direct Access to Public Attributes
    // - Assigning values to 'name' and 'subject'
    // ------------------------------------
    t1.name = "kshitij";
    t1.subject = "cpp";

    // ------------------------------------
    // Using Setter Method to Assign Private Member
    // - Setting the private member 'salary' using 'setSalary'
    // ------------------------------------
    t1.setSalary(154586);

    // ------------------------------------
    // Method Invocation
    // - Calling 'printinfo' to display teacher's information
    // ------------------------------------
    t1.printinfo();

    return 0;
};
