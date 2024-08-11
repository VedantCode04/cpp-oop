#include <iostream>
using namespace std;

class Demo{
private:
public:
	int count = 0;

	void operator ++ (){
		++this->count;
	}
};

class Complex{
private:
public:
	int real, img;
	Complex(){
		real = 0;
		img = 0;
	}
	Complex(int r, int i){
		real = r; img = i;
	}

	void getValues(){
		cout << real << "+" << img << "i"  << endl;
	}

	Complex operator + (Complex &obj1){
		Complex c;

		c.real = real + obj1.real;
		c.img = img + obj1.img;

		return c;		
	}
};

int main(){
	Demo d;
	cout << "UNARY OVERLOADING --------" << endl;
	cout << "Before operator overloading: count = " << d.count << endl;
	++d;
	++d;
	cout << "After operator overloading: count = " << d.count << endl << endl;

	cout << "BINARY OVERLOADING --------" << endl;

	Complex obj1(10, 5);
	Complex obj2(30, 10);

	obj1.getValues();
	obj2.getValues();

	Complex obj3;
	cout << "obj3 before = ";
	obj3.getValues();

	obj3 = obj1 + obj2;

	cout << "obj3 after = ";
	obj3.getValues();
}