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
















