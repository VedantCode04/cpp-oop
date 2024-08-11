#include <iostream>
using namespace std;

class Student {
    int id = 10;
    string name = "vedant";

public:
	Student(){
		cout << "In Default constructor: " << endl;
		cout << "this pointer: id = " << this->id << " name = " << this->name << endl << endl;
	}

	Student(int id, string name){
		cout << "In Parameterized constructor: " << endl;
		cout << "passed parameters: ";
		cout << "id = " << id << " name = " << name << endl;
		cout << "before assiging: ";
		cout << "id = " << this->id << " name = " << this->name << endl;
		this->id = id;
		this->name = name;
		cout << "after assiging: ";
		cout << "id = " << this->id << " name = " << this->name << endl << endl;
	}

    void displayData(int id, string name)
    {
    	cout << "In Display data: " << endl;
        cout << "paramaters: id = " << id << " name = " << name << endl;
        cout << "this pointer: id = " << this->id << " name = " << this->name << endl << endl;
    }
};

int main()
{
	Student s;
	s.displayData(20, "JohnDoe");

	Student s1(30, "Pujan");
}