#include <iostream>
using namespace std;

class Shape {
public:
	void displayName(){
		cout << "This is abstract class Shape" << endl;
	}
    virtual void area() = 0;
}; //if a class has atleast one pure virtual function, it is count as abstract class and we can create object of it, only pointer

//classes with only pure virtual function are called Interfaces

class Square : public Shape {
    int length;

public:
    Square(int l)
        : length(l)
    {
    } // known as initializer list
    void area()
    {
        cout << "square area = " << length * length << endl;
    }
};

class Circle : public Shape {
    int radius;

public:
    Circle(double r)
        : radius(r)
    {
    } // known as initializer list
    void area()
    {
        cout << "circle area = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
	// Shape s; throws error cause it is abstract class and we cant declare abstract class objects, only pointers
    Shape* s = new Square(10.5);
    Shape* c = new Circle(5.5);
    s->area();
    c->area();
    s->displayName();
    c->displayName();
    cout << endl;
    Square sc(5.5);
    Circle cc(10);
    sc.area();
    cc.area();
    cc.displayName();
    sc.displayName();
}