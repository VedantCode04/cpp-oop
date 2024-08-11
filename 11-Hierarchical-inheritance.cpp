#include <iostream>
using namespace std;

class Parent {
public:
    string name;
    Parent()
    {
        cout << "Parent constructor invoked." << endl;
        name = "Vedant";
    }

    void getValues()
    {
        cout << "Parent class method.";
        cout << "name = " << name << endl;
    }
};

class Child1 : public Parent {
public:
    string name;
    Child1()
    {
        cout << "Child1 constructor invoked." << endl;
        name = "Child1-Vedant";
    }

    void getData()
    {
        cout << "In Child1 class metod." << endl;
        cout << "name = " << name << " Parent name = " << Parent::name << endl;
    }
};

class Child2 : public Parent {
public:
    string name;
    Child2()
    {
        cout << "Child2 constructor invoked." << endl;
        name = "Child2-Vedant";
    }

    void getData()
    {
        cout << "In Child2 class metod." << endl;
        cout << "name = " << name << " Parent name = " << Parent::name << endl;
    }
};

int main()
{
    Child1 c1;
    cout << c1.name << " -- " << c1.Parent::name << endl;
    c1.getValues();
    c1.getData();
    cout << endl;
    Child2 c2;
     cout << c2.name << " -- " << c2.Parent::name << endl;
    c2.getValues();
    c2.getData();
}