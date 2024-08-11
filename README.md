# cpp-oops

This repository contains code of OOPs concepts in C++ language. 

# C++ Object-Oriented Programming (OOP) Examples

## 1. Basics

### 1.1 Class
A class in C++ is a blueprint for creating objects. It defines a data structure that includes both data members (variables) and member functions (methods) that operate on the data. Classes enable the bundling of data and methods into a single unit.

- [1-class.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/1-class.cpp)

### 1.2 Constructor
A constructor is a special member function that is automatically called when an object of the class is created. It initializes the object and allocates resources if needed. Constructors can be overloaded to provide multiple ways to initialize an object.

- [2-constructor.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/2-constructor.cpp)

### 1.3 Destructor
A destructor is a special member function that is automatically called when an object goes out of scope or is explicitly deleted. It is used to release resources allocated by the object and perform cleanup tasks.

- [3-destructor.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/3-destructor.cpp)

### 1.4 Scope Resolution Operator
The scope resolution operator (`::`) is used to define methods outside the class definition and to access global variables or functions that might be hidden by local scope.

- [4-scope_resolution.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/4-scope_resolution.cpp)

### 1.5 This Pointer
The `this` pointer is a special pointer available in non-static member functions. It points to the object for which the member function is called, allowing access to the object's members.

- [5-this.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/5-this.cpp)

### 1.6 Static Variable
A static variable in a class is shared by all instances of the class. It retains its value between function calls and is initialized only once.

- [6-static-var.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/6-static-var.cpp)

### 1.7 Static Method
A static method belongs to the class rather than any object instance. It can be called without creating an instance of the class and can only access static variables and methods.

- [7-static-method.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/7-static-method.cpp)

### 1.8 Friend Function
A friend function is a non-member function that has access to the private and protected members of a class. It is declared using the `friend` keyword.

- [8-friend.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/8-friend.cpp)

## 2. Inheritance

### 2.1 Single Inheritance
In single inheritance, a class (derived class) inherits from another class (base class). The derived class acquires all the properties and behaviors of the base class.

- [9-single-inheritance.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/9-single-inheritance.cpp)

### 2.2 Multilevel Inheritance
In multilevel inheritance, a class is derived from another derived class, forming a chain. This means that a class can inherit from another class, which itself is derived from yet another class.

- [10.1-multilevel-inheritance.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/10.1-multilevel-inheritance.cpp)
- [10.2-constructor-inheritance.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/10.2-constructor-inheritance.cpp)

### 2.3 Hierarchical Inheritance
In hierarchical inheritance, multiple classes are derived from a single base class. All derived classes share the same base class.

- [11-Hierarchical-inheritance.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/11-Hierarchical-inheritance.cpp)

### 2.4 Multiple Inheritance
In multiple inheritance, a class can inherit from more than one base class. This allows the derived class to inherit properties and behaviors from multiple base classes.

- [12-multiple-inheritance.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/12-multiple-inheritance.cpp)

### 2.5 Hybrid Inheritance
Hybrid inheritance is a combination of two or more types of inheritance. It often involves multiple inheritance along with other inheritance types, leading to a complex hierarchy.

- [15-hybrid-inheritance.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/15-hybrid-inheritance.cpp)

### 2.6 Diamond Problem
The diamond problem occurs in multiple inheritance when a class inherits from two classes that have a common base class. This can lead to ambiguity in which base class members are inherited.

- [13-diamond-problem.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/13-diamond-problem.cpp)

## 3. Polymorphism

### 3.1 Function Overloading
Function overloading allows multiple functions with the same name but different parameters to coexist. The correct function is called based on the number and type of arguments passed.

- [14-function-overloading.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/14-function-overloading.cpp)

### 3.2 Operator Overloading
Operator overloading allows you to define custom behaviors for operators when they are used with class objects. This enables classes to interact with operators like built-in types.

- [16-operator-overloading.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/16-operator-overloading.cpp)

### 3.3 Function Overriding
Function overriding occurs when a derived class provides a specific implementation of a function that is already defined in its base class. The base class function must be marked as `virtual` to enable overriding.

- [18.1-function-overriding.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/18.1-function-overriding.cpp)
- [18.2-function-overriding.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/18.2-function-overriding.cpp)

### 3.4 Function Hiding
Function hiding occurs when a derived class defines a function with the same name as a function in its base class, but with different parameters. The base class function is hidden and not overridden.

- [17-function-hiding.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/17-function-hiding.cpp)

### 3.5 Abstract Classes
An abstract class is a class that cannot be instantiated and contains at least one pure virtual function. It serves as a base class for other classes and provides a common interface for derived classes.

- [19-abstract-class.cpp](https://github.com/VedantCode04/cpp-oops/blob/main/19-abstract-class.cpp)
