#include <iostream>
using namespace std;

//function overloading. Compile time poly // static or early binding
//1. different arguments ((int,int) (int, double))
//2. diff number of arguments

double sum(int a, int b){
	return a + b;
}

int sum(int a, int b, int c){
	return a + b + c;
}

double sum(int a, double b){
	return a + b;
}

class A{
public:
	int sum(int a, int b){
		return a + b;
	}
};

class B : public A{
public:
	 using A::sum; // to remove name hiding in c++. Cpp hides the same name function when used in inheritance so to prevent this and keep the function overloaded, we use namespace
	int sum(int a, int b, int c){
		return a + b + c;
	}

	int sum(int a){
		return a + 10;
	}
};

int main(){

	cout << sum(10,20) << endl;
	cout << sum(10,20, 30) << endl;
	cout << sum(10,20.5) << endl;

	cout << endl;
	B obj;
	cout << obj.sum(10) << endl;
	cout << obj.sum(10,20) << endl; 
	cout << obj.sum(10,20, 30) << endl;
}