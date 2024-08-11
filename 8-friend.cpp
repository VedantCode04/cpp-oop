#include <iostream>
using namespace std;

class B; // to use common friend function between two class, declare other classes in starting else compieler will throw error.

class A{
private:
	int a;
	void setA(int n){
		a = n;
	}
public:
	void display(){
		cout << "a = " << a << endl;
	}
	friend void add(A a, B b);
};

class B{
protected:
	int b;
	void setB(int n){
		b = n;
	}
public:
	void display(){
		cout << "b = " << b << endl;
	}
	friend void add(A a, B b);
};

void add(A a, B b){
	cout << endl;
	cout << "Friend function common to two classes" << endl;
	a.setA(10); //accessing private method
	a.display(); //accessing public method

	b.setB(20); //accessing protected method
	b.display();

	cout << "a+b = " << a.a + b.b << endl; // accessing private and protected variables
}

class Employee{
private:
	int privVar = 100;
protected:
	int protVar = 200;
public:
	int pubVar = 300;
	friend void display(Employee e); 
};

void display(Employee e){
	cout << "friend function Display can access all variables: " << endl;
		cout << "private variable = " << e.privVar << endl;
		cout << "protected variable = " << e.protVar << endl;
		cout << "public variable = " << e.pubVar << endl;
}

int main(){
	Employee e;
	display(e);

	A a;
	B b;

	add(a, b);
}