#include <iostream>
using namespace std;

class Car {
public:
	string name;
	int price;
	string brand;
};

class Student {
private:
	string name;
	int id;
public:
	void setVal(){
		name = "Vedant";
		id = 100;
	}

	void getVal(){
		cout << "Name = " << name << endl;
		cout << "Id = " << id << endl;
	}
};

class Employee{
private:
	string name;
	int id;
public:
	void setVal(string n, int i){
		name = n;
		id = i;
	}

	void getVal(){
		cout << "Name = " << name << endl;
		cout << "Id = " << id << endl;
	}
};

class College{
private:
	string name = "hogwarts university";
public:
	void setVal(string n){
		name = n;
	}

	void getVal(){
		cout << "Name = " << name << endl;
	}
};

int main()
{
	Car c;
	c.name = "G-Wagon";
	c.price = 1000;
	c.brand = "Mercedes";

	cout << c.name << " " << c.price << " " << c.brand << endl;

	Student s;
	s.setVal();
	s.getVal();

	Employee e;
	e.setVal("vedant", 200);
	e.getVal();

	College cl;

	cl.getVal();
	cl.setVal("Harvard Uni");
	cl.getVal();
}