#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
	Student(int i, string s){
		id = i;
		name = s;
	}

	~ Student(){
		//destructor is called at the end of program to free the memory taken by the objects created
		cout << "Destructor is called of \nstudent id: " << id << " name: " << name << endl << endl;
	}
};

int main()
{
	Student s1(1, "vedant");
	Student s2(2, "pujan");
	Student s3(3, "krupal");
}