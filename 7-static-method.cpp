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

    static int getCount()
    {
        return count;
    }

    static void setCount()
    {
        count++;
    }
};

// common to all objects and belongs to class;
int Student::count = 0;

int main()
{
    Student s("vedant");
    Student s1("kushal");

    cout << "total objects is (using object) : " << s1.getCount() << endl;
    cout << "total objects is (using class name) : " << Student::getCount() << endl;

    cout << endl;
    cout << "Setting count using object..." << endl;
    s.setCount();
    cout << "total objects is (using object) : " << s1.getCount() << endl;
    cout << endl;
    cout << "Setting count using Classname..."<< endl;
    s1.setCount();
    cout << "total objects is (using class name) : " << Student::getCount();
}