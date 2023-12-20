//
// Created by Alptekin's Macbook on 19.12.2023.
//

#ifndef BIL142_CONTROL_STRUCTURES_H
#define BIL142_CONTROL_STRUCTURES_H

/*
 * If-Else Statements:
Basic Syntax:
Explain the structure of if-else statements: if (condition) { // code } else { // code }.

Example 1:

int num = 10;
if (num > 0) {
    std::cout << "Number is positive\n";
} else {
    std::cout << "Number is non-positive\n";
}
Nested If-Else:

Show how if-else statements can be nested for more complex conditions.
TODO: Cyclomatic complexity
Loops:
While Loop:
Explain the structure: while (condition) { // code }.
Example 2:

int count = 0;
while (count < 5) {
    std::cout << count << " ";
    count++;
}
* For
loop structure: for (initialization; condition; update) { // code }.
Explain the three parts: initialization, condition, and update.
for (int i = 0; i < 5; i++) {
    std::cout << i << " ";
}

 You can use more than one variables for condition controls.
for (int i = 0, j = 0; i < 5; i++, j--) {
        std::cout << i << " ";
        std::cout << j << "\n";
}
Do-While Loop:
do-while structure: do { // code } while (condition);.

int x{5};
do {
    std::cout << x << " ";
    x--;
} while (x > 0);
Switch-Case Statements
switch-case statements for multiple branching.
Discuss the structure: switch (expression) { case constant: // code break; ... default: // code }.

char grade = 'B';
switch (grade) {
    case 'A':
        std::cout << "Excellent\n";
        break;
    case 'B':
        std::cout << "Good\n";
        break;
    default:
        std::cout << "Grade not recognized\n";
}

char grade = 'B';
switch (grade) {
    case 'A':
        std::cout << "Excellent\n";
        break; // what if forget this one?
    case 'B':
        std::cout << "Good\n";
        break;
    default:
        std::cout << "Grade not recognized\n";
}

 * */

#endif //BIL142_CONTROL_STRUCTURES_H
