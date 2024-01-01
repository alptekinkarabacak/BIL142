//
// Created by Alptekin's Macbook on 20.12.2023.
//

#ifndef BIL142_POINTERS_REFERENCES_H
#define BIL142_POINTERS_REFERENCES_H
/*
Pointers
A pointer is a variable that stores the memory address of another variable. It allows indirect access to the value of that variable by pointing to its memory location.

Declaration:
*/
int main() {
    int x = 10; // Our variable

    // Pointer declaration
    int* ptr; // Declaring a pointer to an integer

    // Assigning the address of x to the pointer
    ptr = &x; // '&' gets the memory address of x
    return 0;
}
/*
Dereferencing:
Dereferencing a pointer means accessing the value stored at the memory address it points to. This is done using the * operator.
*/

int main() {
    int x = 10;
    int* ptr;
    ptr = &x;

    // Dereferencing the pointer to get the value at that address
    cout << "Value of x: " << *ptr << endl; // Output: Value of x: 10
    return 0;
}
/*
References:
References provide an alias to an existing variable. They are essentially another name for the same variable and must be initialized when declared.
*/

int main() {
    int x = 10;

    // Reference declaration
    int& ref = x; // '&' here creates a reference to x

    cout << "Value of x: " << x << endl;    // Output: Value of x: 10
    cout << "Value of ref: " << ref << endl; // Output: Value of ref: 10

    return 0;
}
/*
Differences:

Pointers can be reassigned and can be null (pointing nowhere).
References cannot be reassigned to another variable and must be initialized upon declaration.
Example Differentiating Pointers and References:
*/

int main() {
    int x = 10;
    int y = 20;

    int* ptr = &x; // Pointer to x
    int& ref = y;  // Reference to y

    *ptr = 30; // Changing the value of x through the pointer
    ref = 40;  // Changing the value of y through the reference
    int foo{100};
    ref = foo;
    y = 500;
    std::cout<<ref;

    return 0;
}

// You can return reference from a function
int & squareRef(int &);

int main() {
    int number1 = 8;
    int & result = squareRef(number1);
    std::cout << &result << "\n";   //
    std::cout << &number1 << "\n";  //


}

int & squareRef(int & rNumber) {
    std::cout <<  "In squareRef(): " << &rNumber << "\n";  // 0x22ff14
    rNumber *= rNumber;
    return rNumber;
}

// What about this one?
int & squareRef(int &);

int main() {
    int number1 = 8;
    int & result = squareRef(number1);
    std::cout << &result << "\n";   //
    std::cout << &number1 << "\n";  //


}

int & squareRef(int & rNumber) {
    int localVar{64};
    localVar *= rNumber;
    return localVar;
}



#endif //BIL142_POINTERS_REFERENCES_H
