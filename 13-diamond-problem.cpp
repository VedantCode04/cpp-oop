#include <iostream>
using namespace std;
// this can be also considered in hybrid inheritance
class Parent{
public:
	void foo(){
		cout << "In Parent" << endl;
	}
};

class Child1 : virtual public Parent { // virtually inherit base class, doing so will result in grandchild class having only one instance of base class
public:
	void foo1(){
		cout << "In Child1" << endl;
	}
};

class Child2 : virtual public Parent{ // virtually inherit base class, doing so will result in grandchild class having only one instance of base class
public:
	void foo1(){
		cout << "In Child2" << endl;
	}
};

class Grandchild : public Child1, public Child2{
public:
};

int main(){
	Grandchild g;
	g.foo();
	g.Child1::foo1();
	g.Child2::foo1();
}