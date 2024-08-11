#include <iostream>
using namespace std;

class Car {
public:
    int steering = 1;
    int wheels = 4;

    void getValues()
    {
        cout << "In Car Class: " << endl;
        cout << "Steering = " << steering << endl;
        cout << "Wheels = " << wheels << endl
             << endl;
    }
};

class Honda : public Car {
public:
    string brand = "honda";

    void getData()
    {
        cout << "In Honda Class: " << endl;
        cout << "Steering = " << steering << endl;
        cout << "Wheels = " << wheels << endl;
        cout << "Brand = " << brand << endl
             << endl;
    }

    void setData(int wheels, int steering, string brand)
    {
        this->brand = brand;
        this->wheels = wheels;
        this->steering = steering;

        cout << "After Updating values using method in Honda" << endl;
        getData();
    }
};

int main()
{
	Car c;
	c.getValues(); 

	
    Honda h;

    cout << "Initial values: " << endl;
    cout << "In Honda Class: " << endl;
    cout << "Steering = " << h.steering << endl;
    cout << "Wheels = " << h.wheels << endl;
    cout << "Brand = " << h.brand << endl
         << endl;

    h.getValues();

    h.steering = 2;
    h.wheels = 6;
    h.brand = "Hero Honda";

    cout << "Updated values: " << endl;
    h.getData();

    h.getValues();

    h.setData(3, 7, "Mercedes");

    h.getValues();

}