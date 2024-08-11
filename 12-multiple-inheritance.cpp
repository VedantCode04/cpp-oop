#include <iostream>
using namespace std;

class Mother{
public:
	string mothername;

	Mother(){
		cout << "Mother class constructor ivoked" << endl;
		mothername = "DEFAULT MOTHER NAME" ;
	}

	Mother(string mname){
		cout << "Parameterized Mother constructor." << endl;
		mothername = mname;
		cout << "Mother name = " << mothername << endl;
	}

	void setMotherName(string name){
		cout << "in Mother class" << endl;
		mothername = name;
	}

	void display(){
		cout << "DISPLAY FROM Mother class";
	}
};

class Father{
public:
	string fathername;

	Father(){
		cout << "Father class constructor ivoked" << endl;
		fathername = "DEFAULT FATHER NAME" ;
	}

	Father(string fname){
		cout << "Parameterized Father constructor." << endl;

		fathername = fname;

		cout << "Father name = " << fathername << endl;
	}

	void setFatherName(string name){
		cout << "in Father class" << endl;
		fathername = name;
	}

	void display(){
		cout << "DISPLAY FROM Father class";
	}
};

class Child: public Father , public Mother{
public:
	string childname;

	Child(){
		cout << "Child class constructor invoked" << endl;
		childname = "DEFAULT CHILD NAME";
	}

	Child(string cname, string mname, string fname) : Father(fname), Mother(mname){
		cout << "Child constructor ivoked" << endl;
		childname = cname;
		cout << "Child name: " << childname << endl;
	}

	void getData(){
		cout << endl;
		cout << "In childclass method: " << endl;
		cout << "Mother name = " << mothername << endl;
		cout << "Father name = " << fathername << endl;
		cout << "Child name = " << childname << endl;
	}
};

int main(){
	Child c;

	c.getData();

	cout << endl;
	c.Father::display(); cout << endl << endl;
	c.Mother::display(); cout << endl << endl;
	// c.display() throws ambguity error
	
	cout << endl;
	Child c1("vedant", "neelam", "prakash");
}