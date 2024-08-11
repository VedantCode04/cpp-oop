#include <iostream>
using namespace std;

class Parent {
public:
    string name = "Parent";
    virtual void display()  // Virtual method in Parent
    {
        cout << "In Parent class" << endl;
    }
};

class Child : public Parent {
public:
    string name = "Child";
    void display()  
    {
        cout << "In Child class" << endl;
    }
};

class Grandchild : public Child {
public:
    string name = "Grandchild";
    void display() override  
    {
        cout << "In Grandchild class" << endl;
    }
};

int main()
{
    Parent* ptr;
    Child ch, *ptr2;
    Grandchild g;

    ch.display();
    g.display();

    ptr = &ch;

    cout << endl;
    cout << "ptr name var = " << ptr->name << endl; 
    cout << "ptr method called = ";
    ptr->display(); 

    cout << endl;

    ptr2 = &g;
    cout << "ptr2 name var = " << ptr2->name << endl;
    cout << "ptr2 method called = ";
    ptr2->display(); 

    return 0;
}
