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