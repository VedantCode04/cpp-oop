#include <iostream>
using namespace std;

class Grandfather {
public:
    string gname = "grandfather";
    void method()
    {
        cout << " this is Grandfather method" << endl;
    }

    void grandfatherName()
    {
        cout << "Grandfather name = " << gname << endl;
    }
};

class Father : public Grandfather {
public:
    string fname = "father";
    void method()
    {
        cout << " this is father method" << endl;
    }

    void fatherName()
    {
        cout << "Father name = " << fname << endl;
    }
};

class Mother {
public:
    string mname = "mother";
    void method()
    {
        cout << " this is Mother method" << endl;
    }

    void motherName()
    {
        cout << "Mother name = " << mname << endl;
    }
};

class Child : public Father, public Mother {
public:
    string cname = "child";
    void method()
    {
        cout << " this is Child method" << endl;
    }

    void childName()
    {
        cout << "Child name = " << cname << endl;
    }
};

int main()
{
    Child c;

    c.method();
    c.Mother::method();
    c.Father::method();
    c.Grandfather::method();

    c.grandfatherName();
    c.fatherName();
    c.motherName();
    c.childName();

    cout << c.cname << endl;
    cout << c.mname << endl;
    cout << c.fname << endl;
    cout << c.gname << endl;
}