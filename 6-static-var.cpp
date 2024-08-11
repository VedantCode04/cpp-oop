#include <iostream>
using namespace std;

class Student {
private:
    string name;
    static int count;

public:
    Student(string name)
    {
        cout << "In Student" << endl;
        this->name = name;
        // increment count by 1 as static member
        count++;
        cout << "name = " << this->name << endl;
        cout << "static count = " << count << endl
             << endl;
    }

};

// common to all objects and belongs to class;
int Student::count = 0;

class Employee {
private:
    string name;

public:
    static int count;
    Employee(string name)
    {
        cout << "In Employee" << endl;

        this->name = name;
        // increment count by 1 as static member
        count++;
        cout << "name = " << this->name << endl;
        cout << "static count = " << count << endl
             << endl;
    }
};

int Employee::count = 0;

int main()
{
    Student s("vedant");
    Student s1("kushal");

    Employee e("krupal");
    Employee e2("anshu");

    cout << "Employee count in main function using Class name: " << Employee::count << endl;
    cout << "Employee count in main function using e2: " << e2.count << endl;
    cout << "Employee count in main function using e: " << e.count << endl;
    // cout << "Student count in main function: " << Student::count << endl; this will throw error as count in private in Student
}


