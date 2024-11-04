#include <iostream>
#include <string>
using namespace std;

// ====================================
// Class: Teacher
// ====================================

class Teacher{
    public:
        // ------------------------------------
        // Constructor
        // - No-parameter constructor
        //   Initializes 'dept' with a default value
        // ------------------------------------
        Teacher(){
            dept = "computer science";
        }

        // ------------------------------------
        // Constructor
        // - Parameterized constructor
        //   Initializes 'name', 'dept', 'subject', and 'salary' with provided values
        // ------------------------------------
        Teacher(string name, string dept, string subject, double salary){
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        };

    private:
        // ------------------------------------
        // Encapsulation: Private Member
        // - 'salary' is a private attribute
        //   Accessible only within the Teacher class
        // ------------------------------------
        double salary;

    public:
        // ------------------------------------
        // Encapsulation: Public Members
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
        // - 'setSalary' sets the value of 'salary'
        // ------------------------------------
        void setSalary(double s){
            salary = s;
        }

        // ------------------------------------
        // Getter Method
        // - 'getSalary' retrieves the value of 'salary'
        // ------------------------------------
        double getSalary() {
            return salary;
        }
    
        // ------------------------------------
        // Member Function
        // - 'printinfo' displays teacher's information
        // ------------------------------------
        void printinfo() {
            cout << "Teacher Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Dept: " << dept << endl;
            cout <<"Salary: "<< getSalary() << endl;
        }
};

// ====================================
// Class: Student
// ====================================

class Student {
    public:
        // ------------------------------------
        // Encapsulation: Public Members
        // - 'name' is a public attribute
        // - 'cgpaPtr' is a public pointer to double
        // ------------------------------------
        string name;
        double* cgpaPtr;
        
        // ------------------------------------
        // Constructor
        // - Parameterized constructor
        // - Allocates memory for 'cgpaPtr' and initializes it
        // ------------------------------------
        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        // ------------------------------------
        // Copy Constructor
        // - Creates a deep copy of 'cgpaPtr' to prevent shared memory issues
        // ------------------------------------
        Student(Student &obj) {
            this->name = obj.name;
            cgpaPtr = new double;
            *cgpaPtr = *obj.cgpaPtr;
        }

        // ------------------------------------
        // Destructor
        // - Releases dynamically allocated memory to prevent memory leaks
        // ------------------------------------
        ~Student() {
            cout << "Hi, I delete everything\n....";
            delete cgpaPtr;
        }

        // ------------------------------------
        // Member Function
        // - 'printinfo' displays student's information
        // ------------------------------------
        void printinfo() {
            cout << "Name: " << name << endl;
            cout <<"CGPA: "<< *cgpaPtr << endl;
        }
};

// ====================================
// Class: Accounts
// (Note: Currently not utilized in main())
// ====================================

class Accounts{
    private:
        // ------------------------------------
        // Encapsulation: Private Member
        // - 'paisa' is a private attribute
        // ------------------------------------
        double paisa;   
    public:    
        // ------------------------------------
        // Encapsulation: Public Members
        // - 'accountsID' and 'holderName' are public attributes
        // ------------------------------------
        string accountsID;
        string holderName;    
};

// ====================================
// Main Function
// ====================================

int main() {
    // ------------------------------------
    // Object Instantiation: Teacher Objects
    // - Creating objects using default and parameterized constructors
    // ------------------------------------
    Teacher t1;
    t1.name = "kshitij";
    t1.subject = "cpp";
    t1.setSalary(154586);

    Teacher t2("sumith", "cse", "html", 10166);

    // ------------------------------------
    // Method Invocation
    // - Calling 'printinfo' to display Teacher information
    // ------------------------------------
    t1.printinfo();
    t2.printinfo();
    
    // ------------------------------------
    // Object Instantiation: Student Objects
    // - Creating 's1' using parameterized constructor
    // - Creating 's2' as a copy of 's1' using copy constructor
    // - Demonstrates dynamic memory management
    // ------------------------------------
    Student s1("rushikesh", 8.9);
    Student s2(s1);

    // ------------------------------------
    // Method Invocation
    // - Calling 'printinfo' to display Student information
    // ------------------------------------
    s1.printinfo();

    // ------------------------------------
    // Modifying Student 's2' CGPA
    // - Directly accessing and modifying the value pointed by 'cgpaPtr'
    // - Note: Ideally, use a setter method for encapsulation
    // ------------------------------------
    *(s2.cgpaPtr) = 9.2;
    s2.printinfo();

    // ------------------------------------
    // Destructor Invocation
    // - Destructors are called automatically when objects go out of scope
    //   's1' and 's2' will have their destructors invoked here
    // ------------------------------------
    return 0;
};
