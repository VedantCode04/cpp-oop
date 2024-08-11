#include <iostream>
using namespace std;

class Grandfather{
public:
	string name = "grandfather";
};

class Father : public Grandfather{
public:
	string name = "Father";
};

class Son : public Father {
public:
	string name = "Son";

	void getNames(){
		cout << "inside Son class" << endl;
		cout << "son name = " << name << endl;
		cout << "father name = " << Father::name << endl; // can access this as protected can be accessed inside the child classes
		cout << "Grandfather name = " << Grandfather::name << endl << endl;
	}

	void setNames(string sname, string fname, string gname){
		name = sname;
		Father::name = fname;
		Grandfather::name = gname;

		cout << "after setting new names: ";
		getNames();
	}
};

int main(){
	Son s;

	cout << "accessing the parent class properties having same name: " << endl;
	cout << s.name << endl;
	cout << s.Father::name << endl;
	cout << s.Grandfather::name << endl << endl;
	// :: is scope resolution operator
	s.getNames();

	s.setNames("sonclass", "fatherclass", "grandfatherclass");
}