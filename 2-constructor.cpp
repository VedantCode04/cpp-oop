#include <iostream>
using namespace std;

class Student{
private:
	int id;
	string name;
public:
	Student(){
		//default constructor
		id = 100;
		name = "vedant";

		cout << "In Default constructor: " << endl;
		cout << "id = " << id << " name = " << name << endl << endl;
	}

	Student(int i, string n){
		//parameterized constructor
		id = i;
		name = n;

		cout << "In Paramaterized constructor: " << endl;
		cout << "id = " << id << " name = " << name << endl << endl;
	}

	Student(string n){
		// constructor overloading, diff number of arguments
		id = 300;
		name = n;

		cout << "Constructor Overloading: " << endl;
		cout << "id = " << id << " name = " << name << endl << endl;
	}

	Student(Student &s){
		//copy constructor
		id = s.id;
		name = s.name;

		cout << "In Copy constructor: " << endl;
		cout << "id = " << id << " name = " << name << endl << endl;
	}

};

int main()
{
	Student s;
	Student s1(200, "Vedant Patel");
	Student s2("JohnDoe");
	Student s3(s1);

}