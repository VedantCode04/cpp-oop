#include <iostream>
using namespace std;

class A {
public:
    void display()
    {
        cout << "In A class" << endl;
    }
};

class B : public A {
public:
    void display()
    {
        cout << "In B class" << endl;
    }
};

int main()
{
    A* ptr = NULL;

    ptr->display(); // will display A's method
    B b;
    b.display();

    ptr = &b; // how refrenceing to B class

    ptr->display(); // still display A method even after pointing to B cause not declared virtual
}