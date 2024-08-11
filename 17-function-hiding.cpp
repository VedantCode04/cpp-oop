#include <iostream>
using namespace std;


class Parent {
public:
	void display(){
		cout << "This is parent class" << endl;
	}
};

class Child : public Parent {
public:
	void display(){
		cout << "This is child class" << endl;
	}
};

int main(){
	Child c;

	c.display();
}