#include <iostream>
using namespace std;

class Student {
    int id = 10;
    string name = "vedant";
public:
    void getStudent();
};

void Student::getStudent()
{
    cout << "id = " << id << endl;
    cout << "name = " << name << endl;
}

class Employee {
    int id = 10;
    string name = "vedant";
    void getEmployee();
public:

	void setEmployee(int i, string s);
};

void Employee::getEmployee()
{
    cout << "id = " << id << endl;
    cout << "name = " << name << endl;
}

void Employee::setEmployee(int i , string s)
{
	cout << "employee before: ";
    getEmployee();
    id = i;
    name = s;
    cout << "employee after: ";
    getEmployee();
}

int main()
{
    Student s;
    s.getStudent();

    cout << endl;
    Employee e;
    e.setEmployee(200, "pujan");
}