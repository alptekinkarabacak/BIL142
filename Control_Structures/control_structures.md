If Statement / If Condition
In computer programming, we use the if...else statement to run one block of code under certain conditions and another block of code under different conditions.

For example, assigning grades (A, B, C) based on marks obtained by a student.
    if the percentage is above 90, assign grade A
    if the percentage is above 75, assign grade B
    if the percentage is above 65, assign grade C
    
There are three forms of if...else statements in C++.

    if statement
    if...else statement
    if...else if...else statement


Basic Syntax:
```
if (condition) {
  // body of if statement
}
```
The if statement evaluates the condition inside the parentheses ( ).

If the condition evaluates to true, the code inside the body of if is executed.
If the condition evaluates to false, the code inside the body of if is skipped.

// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped
```
#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is positive
  if (number > 0) {
    cout << "You entered a positive integer: " << number << endl;
  }

  cout << "This statement is always executed.";

  return 0;
}
```
if...else





Syntax is: if (condition) 
{
// these Codes will run if "condition" return true.
}
else if (Another condition)
{
// these Codes will run if  "Another condition" return true.
}
else
{
// these Codes will run if any condition does not return true.
}


```
int a = pow(2,32);
std::numeric_limits<int>::max();
std::cout<<a<<"\n";
std::cout<<std::numeric_limits<int>::max()<<"\n";
```
