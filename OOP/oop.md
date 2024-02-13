1 The Object-Oriented Philosophy
As we have noted, OO programming languages had their roots in simulation.

The first proponents of OO looked back to simulation, one of the early success stories in programming and design. Many early simulation programmers were able to construct programs that were organized in a way that made them easy to modify and maintain.

In part this was because Simula and other simulation programming languages offered features that supported ADTs as modular building blocks – but so did many other programming languages. Beyond the question of what the language supported, there was the issue of how those simulation programmers organized their programs in the first place. They were, in a very literal sense, keeping it real.

This, it was thought, was because the focus on modeling the real world, in a language that created a module for each kind of real-world object, led to programs that felt “natural” and easily understood by anyone who understood the part of the real world that was being simulated.

If you buy the first part of this philosophy, then the second part becomes really interesting. Ever listen to another programmer explain a design and wonder how the heck that was going to solve the problem at hand? Ever notice how programmers love to make up new terms for things in their code, often in defiance of the normal English-language meaning of the word? Or, even worse, ever read code where the variables had names like info or data or value or the functions had names like processData? Does anyone think names like those  have any informational content?


C++ supports Object Oriented Programming, and classes and objects are the heart of this programming paradigm.

﻿C++ has various built in types (like bool, int, floats, and so on). Each of these types has various features (for example, the size of their memory occupancy). Operators have different meanings for each different type.

For example: The '+' operator  adds ints, floats, and doubles:
```
int x = 5;
int y = 6;

int z= x+y;//z==11
```
However if we use the '+' operator with strings, it concatenates those strings.
```
string s1 = "alptekin";
string s2 = "karabacak";
```

```
string s3=s1+s2;//s3 will be alptekin karabacak
```
Here, x, y, and z represent an integer, while s1, s2, and s3 represent strings. So x, y, and z are objects of type int. Meanwhile s1, s2, and s3 are objects of type string.

Note: don't confuse this with the word 'Object'. An object is anything that occupies memory.

But what if we want to have a type that represents objects in our daily life? How could you represent a house, a car, books, animals, and so on? This is why we need Classes.

A class is a user defined type. This means that you can define your own types. You can make your own types like ints, floats, and chars. You can define operators for your types and set various properties for your own types.
```
class Geeks 
{ 
    public: 
    string geekname; 
    int id; 
      
    // printname is not defined inside class definition 
    void printname(); 
      
    // printid is defined inside class definition 
    inline void printid() 
    { 
        cout <<"Geek id is: "<<id; 
    } 
}; 
  
// Definition of printname using scope resolution operator :: 
void Geeks::printname() 
{ 
    cout <<"Geekname is: "<<geekname;  
} 
int main() { 
      
    Geeks obj1; 
    obj1.geekname = "xyz"; 
    obj1.id=15; 
      
    // call printname() 
    obj1.printname(); 
    cout << endl; 
      
    // call printid() 
    obj1.printid(); 
    return 0; 
} 
```

Difference between class and struct:
Only difference is default access member.


Constructors
 
Constructors are special class members which are called by the compiler every time an object of that class is instantiated. Constructors have the same name as the class and may be defined inside or outside the class definition. There are 3 types of constructors:

Default Constructors
Parameterized Constructors
Copy Constructors

```
using namespace std; 
class Geeks 
{ 
    public: 
    int id; 
      
    //Default Constructor 
    Geeks() 
    { 
        cout << "Default Constructor called" << endl;  
        id=-1; 
    } 
      
    //Parameterized Constructor 
    Geeks(int x) 
    { 
        cout <<"Parameterized Constructor called "<< endl; 
        id=x; 
    } 
}; 
int main() { 
      
    // obj1 will call Default Constructor 
    Geeks obj1; 
    cout <<"Geek id is: "<<obj1.id << endl; 
      
    // obj2 will call Parameterized Constructor 
    Geeks obj2(21); 
    cout <<"Geek id is: " <<obj2.id << endl; 
    return 0; 
}
```

Copy Constructor

A copy constructor is a member function that initializes an object using another object of the same class. In simple terms, a constructor which creates an object by initializing it with an object of the same class, which has been created previously is known as a copy constructor.  

Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.

Copy constructor takes a reference to an object of the same class as an argument.
```
class Student {
    int studentNumber;
    std::string studentName
 
public:
    Student(int, std::string);
    Student(Student& student) // copy constructor
    {
        studentNumber = student.studentNumber;
        studentName = student.studentName
    }
    void display();
};
 
student::student(int number, std::string name)
{
    studentNumber = number;
    studentName = name;
    fee = f;
}
 
void student::display()
{
    cout << endl << rno << "\t" << name << "\t" << fee;
}
 
int main()
{
    Student electronicsStudent(1001, "Alptekin");
    electronicsStudent.display();
 
    student csStudent(electronicsStudent); // copy constructor called
    csStudent.display();
 
    return 0;
}
```

Shallow Copy:
Shallow repetition is quicker. However, it’s “lazy” it handles pointers and references. Rather than creating a contemporary copy of the particular knowledge the pointer points to, it simply copies over the pointer price. So, each of the first and therefore the copy can have pointers that reference constant underlying knowledge.

Deep Copy: Deep repetition truly clones the underlying data. It is not shared between the first and therefore the copy.



The four pillars of OOPs (object-oriented programming):

Encapsulation:
Encapsulation in C++ is a fundamental concept in Object-Oriented Programming (OOP) that involves bundling the data (attributes/variables) and the methods (functions) into a single unit(class).
The internal workings of an object are hidden from the outside world, providing controlled access to the object’s members.
Encapsulation also leads to data abstraction or data hiding, because of which the class is known as Abstract data type (ADT).

Encapsulation is performed by access members: public, private, protected.

Abstraction:
Abstraction in C++ and Object-Oriented Programming (OOP) refers to the concept of hiding complex implementation details while providing a simplified interface to the users.
It involves focusing on essential aspects and ignoring unnecessary details.
Example:


Points to Note:

With Abstraction: In the example, the Circle class encapsulates the radius as a private member and provides methods (setRadius and getArea) to manipulate and access the radius and compute the area. The area calculation logic is abstracted inside the getArea method, hiding the implementation details from the user.

Advantages of Abstraction:
Simplification: Users interact with simplified interfaces without worrying about underlying complexities.
Modifiability: Changes in the internal implementation do not affect users as long as the interface remains consistent.
Security: Encapsulation and abstraction together provide a secure way to access and manipulate data.

Inheritance:

Inheritance in C++ and Object-Oriented Programming (OOP) is a mechanism that allows a class (derived or child class) to inherit properties and behavior from another class (base or parent class).
Inheritance is the sharing of attributes and operations among classes based on a hierarchical relationship.
In C++, inheritance means one object gets all the qualities and actions of its parent object. This helps you use, add to, or change the features and actions defined in another class.

Polymorphism

 The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism is a person who at the same time can have different characteristics. A man at the same time is a father, a husband, and an employee. So the same person exhibits different behavior in different situations. This is called polymorphism. Polymorphism is considered one of the important features of Object-Oriented Programming.

Types of Polymorphism
Compile-time Polymorphism
Runtime Polymorphism

1. Compile-Time Polymorphism
This type of polymorphism is achieved by function overloading or operator overloading.

A. Function Overloading
When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. In simple terms, it is a feature of object-oriented programming providing many functions that have the same name but distinct parameters when numerous tasks are listed under one function name. There are certain Rules of Function Overloading that should be followed while overloading a function.

Below is the C++ program to show function overloading or compile-time polymorphism:

```
 
using namespace std;
class Geeks {
public:
    // Function with 1 int parameter
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }
 
    // Function with same name but
    // 1 double parameter
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }
 
    // Function with same name and
    // 2 int parameters
    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y
             << endl;
    }
};
 
// Driver code
int main()
{
    Geeks obj1;
 
    // Function being called depends
    // on the parameters passed
    // func() is called with int value
    obj1.func(7);
 
    // func() is called with double value
    obj1.func(9.132);
 
    // func() is called with 2 int values
    obj1.func(85, 64);
    return 0;
}
```

Explanation: In the above example, a single function named function func() acts differently in three different situations, which is a property of polymorphism. To know more about this, you can refer to the article – Function Overloading in C++.

B. Operator Overloading
C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. For example, we can make use of the addition operator (+) for string class to concatenate two strings. We know that the task of this operator is to add two operands. So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them. 

Below is the C++ program to demonstrate operator overloading:

```
#include <iostream>
using namespace std;
 
class Complex {
private:
    int real, imag;
 
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
 
    // This is automatically called
    // when '+' is used with between
    // two Complex objects
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << endl; }
};
 
// Driver code
int main()
{
    Complex c1(10, 5), c2(2, 4);
 
    // An example call to "operator+"
    Complex c3 = c1 + c2;
    c3.print();
}
```

Explanation:  In the above example, the operator ‘+’ is overloaded. Usually, this operator is used to add two numbers (integers or floating point numbers), but here the operator is made to perform the addition of two imaginary or complex numbers. To know more about this one, refer to the article – Operator Overloading.

2. Runtime Polymorphism
This type of polymorphism is achieved by Function Overriding. Late binding and dynamic polymorphism are other names for runtime polymorphism. The function call is resolved at runtime in runtime polymorphism. In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.

A. Function Overriding
Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

Function Overriding in C++
Function overriding Explanation

Runtime Polymorphism with Data Members
Runtime Polymorphism cannot be achieved by data members in C++. Let’s see an example where we are accessing the field by reference variable of parent class which refers to the instance of the derived class.

```
 
//  base class declaration.
class Animal {
public:
    string color = "Black";
};
 
// inheriting Animal class.
class Dog : public Animal {
public:
    string color = "Grey";
};
 
// Driver code
int main(void)
{
    Animal d = Dog(); // accessing the field by reference
                      // variable which refers to derived
    cout << d.color;
}
```

We can see that the parent class reference will always refer to the data member of the parent class.

B. Virtual Function
A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overridden) in the derived class.

Some Key Points About Virtual Functions:
Virtual functions are Dynamic in nature. 
They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and overridden in a child class
A virtual function is called during Runtime
Below is the C++ program to demonstrate virtual function:

```
#include <iostream>
 
// Declaring a Base class
class GFG_Base {
 
public:
    // virtual function
    virtual void display()
    {
        cout << "Called virtual Base Class function"
             << "\n\n";
    }
 
    void print()
    {
        cout << "Called GFG_Base print function"
             << "\n\n";
    }
};
 
// Declaring a Child Class
class GFG_Child : public GFG_Base {
 
public:
    void display()
    {
        cout << "Called GFG_Child Display Function"
             << "\n\n";
    }
 
    void print()
    {
        cout << "Called GFG_Child print Function"
             << "\n\n";
    }
};
 
// Driver code
int main()
{
    // Create a reference of class GFG_Base
    GFG_Base* base;
 
    GFG_Child child;
 
    base = &child;
 
    // This will call the virtual function
    base->GFG_Base::display();
 
    //This will call the non-virtual function
    base->print();
}
```

Example 2:
```
 
class base {
public:
    virtual void print()
    {
        std::cout << "print base class" << "\n";
    }
 
    void show() { std::cout << "show base class" << \n; }
};
 
class derived : public base {
public:
    // print () is already virtual function in
    // derived class, we could also declared as
    // virtual void print () explicitly
    void print() { cout << "print derived class" << endl; }
 
    void show() { cout << "show derived class" << endl; }
};
 
// Driver code
int main()
{
    base* bptr;
    derived d;
    bptr = &d;
 
    // Virtual function, binded at
    // runtime (Runtime polymorphism)
    bptr->print();
 
    // Non-virtual function, binded
    // at compile time
    bptr->show();
 
    return 0;
}
```

An interface describes the behavior or capabilities of a C++ class without committing to a particular implementation of that class.

The C++ interfaces are implemented using abstract classes and these abstract classes should not be confused with data abstraction which is a concept of keeping implementation details separate from associated data.

A class is made abstract by declaring at least one of its functions as pure virtual function. A pure virtual function is specified by placing "= 0" in its declaration as follows −
```
class Box {
   public:
      // pure virtual function
      virtual double getVolume() = 0;
      
   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};
```

The purpose of an abstract class (often referred to as an ABC) is to provide an appropriate base class from which other classes can inherit. Abstract classes cannot be used to instantiate objects and serves only as an interface. Attempting to instantiate an object of an abstract class causes a compilation error.

Thus, if a subclass of an ABC needs to be instantiated, it has to implement each of the virtual functions, which means that it supports the interface declared by the ABC. Failure to override a pure virtual function in a derived class, then attempting to instantiate objects of that class, is a compilation error.

Classes that can be used to instantiate objects are called concrete classes.

Abstract Class Example
Consider the following example where parent class provides an interface to the base class to implement a function called getArea() −
```
#include <iostream>
 
using namespace std;
 
// Base class
class Shape {
   public:
      // pure virtual function providing interface framework.
      virtual int getArea() = 0;
      void setWidth(int w) {
         width = w;
      }
   
      void setHeight(int h) {
         height = h;
      }
   
   protected:
      int width;
      int height;
};
 
// Derived classes
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      int getArea() { 
         return (width * height)/2; 
      }
};
 
int main(void) {
   Rectangle Rect;
   Triangle  Tri;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   
   // Print the area of the object.
   cout << "Total Rectangle area: " << Rect.getArea() << endl;

   Tri.setWidth(5);
   Tri.setHeight(7);
   
   // Print the area of the object.
   cout << "Total Triangle area: " << Tri.getArea() << endl; 

   return 0;
}
```

When the above code is compiled and executed, it produces the following result −

You can see how an abstract class defined an interface in terms of getArea() and two other classes implemented same function but with different algorithm to calculate the area specific to the shape.




















