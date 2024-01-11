Suppose, we need to store the length, breadth, and height of a rectangular room and calculate its area and volume.

To handle this task, we can create three variables, say, length, breadth, and height along with the functions calculateArea() and calculateVolume().

However, in C++, rather than creating separate variables and functions, we can also wrap these related data and functions in a single place (by creating objects). This programming paradigm is known as object-oriented programming.

But before we can create objects and use them in C++, we first need to learn about classes.

C++ Class
A class is a blueprint for the object.

We can think of a class as a sketch (prototype) of a house. It contains all the details about the floors, doors, windows, etc. Based on these descriptions we build the house. House is the object.

```
class Room {
    public: // Explain without this
        double length;
        double breadth;
        double height;   

        double calculateArea(){   
            return length * breadth;
        }

        double calculateVolume(){   
            return length * breadth * height;
        }

};
```
The variables length, breadth, and height declared inside the class are known as data members. And, the functions calculateArea() and calculateVolume() are known as member functions of a class.
```
// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
using namespace std;

// create a class
class Room {

public:
    double length;
    double breadth;
    double height;

    [[nodiscard]] double calculateArea() const {
        return length * breadth;
    }

    [[nodiscard]] double calculateVolume() const  {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1{1, 2, 3};

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    Room* room2 = new Room();
    room2->length = 42.5;
    room2->breadth = 30.8;
    room2->height = 19.2;
    
    double x = room2->calculateArea();

    // calculate and display the area and volume of the room
    cout << "Area of the Second Room Room =  " << room2->calculateArea() << endl;
    cout << "Volume of the Second Room =  " << room2->calculateVolume() << endl;

    return 0;
}

```





