#include <iostream>
using namespace std;

class Parent {
public:
    string parentname;
    Parent()
    {
        this->parentname = "DEFAULT PARENT";
        cout << "Parent class default constructor : " << this->parentname << endl;
    }
    Parent(string parentname)
    {
        this->parentname = parentname;
        cout << "Parent class constructor: " << this->parentname << endl;
    }
};

class Child : public Parent {
public:
    string childname;

    Child()
    {
        this->childname = "DEFAULT CHILD";
        cout << "Child class default constructor : " << this->childname << endl;
    }
    Child(string childname)
    {
        this->childname = childname;
        cout << "child class constructor single arg: " << this->childname << endl;
    }

    Child(string childname, string parentname)
        : Parent(parentname)
    {
        this->childname = childname;
        cout << "child class constructor: " << this->childname << endl;
    }
};

class Grandchild : public Child {
public:
    string grandchildname;
    Grandchild()
        : Child()
    {
        this->grandchildname = "DEFAULT GRANDCHILD";
        cout << "grandchild default constructor: " << this->grandchildname << endl;
    }
    Grandchild(string grandchildname, string childname)
        : Child(childname)
    {
        this->grandchildname = grandchildname;
        cout << "grandchild constructor 2 args: " << this->grandchildname << endl;
    }
    Grandchild(string grandchildname, string childname, string parentname)
        : Child(childname, parentname)
    {
        this->grandchildname = grandchildname;
        cout << "grandchild constructor: " << this->grandchildname << endl;
    }
};

int main()
{
    Parent p("PARENT");
    cout << endl;
    Child c("CHILD", "PARENT");
    cout << endl;
    Grandchild g("GRANDCHILD", "CHILD", "PARENT");

    cout << endl;
    Child c3;
    cout << endl;
    Child c1("CHILD");

    cout << endl;

    Grandchild g1;

    cout << endl;

    Grandchild g2("GRANDCHILD", "CHILD");
}