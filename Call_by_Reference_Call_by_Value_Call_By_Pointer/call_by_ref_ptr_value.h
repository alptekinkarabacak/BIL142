//
// Created by Alptekin's Macbook on 1.01.2024.
//

#ifndef BIL142_CALL_BY_REF_PTR_VALUE_H
#define BIL142_CALL_BY_REF_PTR_VALUE_H
// Call by Value

/*
 * Changes made to the parameter within the function do not affect the original argument's value
 * */
void square(int num) {
    num = num * num; // Updates the parameter 'num' locally
    std::cout<<"The address of num is: "<<&num<<"\n";
    std::cout << "Inside function - Value of num: " << num << std::endl;
}

int main() {
    int foo = 5;
    std::cout<<"The address of foo is: "<<&foo<<"\n";
    std::cout << "Before function call - Value: " << foo << std::endl;

    square(foo); // Foo is copied and the original value is not changed

    std::cout << "After function call - Value: " << foo << std::endl;
    return 0;
}

// Call by Reference
/*
 * Any changes made to the parameters within the function directly affect the original variables
 * */

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

// Call by Pointer
/*
 * Changes made to the parameters using pointers within the function affect the original variables
 * */

// Function that doubles a number using call by pointer
void doubleValue(int *ptr) {
    *ptr = *ptr * 2; // Modifies the value at the memory location pointed by 'ptr'
    std::cout << "Inside function - Value at ptr: " << *ptr << std::endl;
}

int main() {
    int value = 5;
    std::cout << "Before function call - Value: " << value << std::endl;


    doubleValue(&value); // Function call with address of 'value' as argument

    std::cout << "After function call - Value: " << value << std::endl;
    return 0;
}


#endif //BIL142_CALL_BY_REF_PTR_VALUE_H
