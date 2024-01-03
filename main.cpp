#include <iostream>
#include "limits"

void increment(int &num) { // Referenced, so any changes in num also changes the original value
    num++; // Modifies the 'num' parameter directly
    std::cout<<"The address of num is: "<<&num<<"\n";
    std::cout << "Inside function - Value of num: " << num << std::endl;
}

int main() {
    int value = 5;
    std::cout<<"The address of value is: "<<&value<<"\n";

    std::cout << "Before function call - Value: " << value << std::endl;

    std::cout<<"The address of value is: "<<&value<<"\n";


    increment(value); // Function call with 'value' as argument by reference

    std::cout << "After function call - Value: " << value << std::endl;
    return 0;
}

