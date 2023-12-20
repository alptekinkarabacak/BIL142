//
// Created by Alptekin's Macbook on 20.12.2023.
//

#ifndef BIL142_FUNCTIONS_SCOPES_REFERENCES_H
#define BIL142_FUNCTIONS_SCOPES_REFERENCES_H

// Function declerations and Definitions

int add(int a, int b); // Decleration

int main() {

    add(5, 4);

}

int add(int a, int b) { // Definiton
    return a + b;
}

// Default Argument
int add(int a, int b = 5);

int main() {

    int a = add(5);
    std::cout<<a<<"\n";


}

int add(int a, int b) {
    return a + b;
}





// Return Different types
void add(int a, int b = 5); // Decleration

int main() {

    int a = add(5);
    std::cout<<a<<"\n";


}

void add(int a, int b) { // Definiton
    // You can return something.
    if (a == 5) {
        return;
    }
}

//Scopes

int foo = 10; // Global variable

void functionScope() {
    int foo = 5; // Local variable
    ::foo = 30;
    std::cout << "Local variable: " << ::foo << "\n";
}

int main() {
    functionScope();
    std::cout << "Global foo: " << ::foo << "\n";
}








#endif //BIL142_FUNCTIONS_SCOPES_REFERENCES_H
