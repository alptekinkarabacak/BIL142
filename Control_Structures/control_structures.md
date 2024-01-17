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
    cout << "You entered a positive integer: " << number << "\n";
  }

  cout << "This statement is always executed.";

  return 0;
}
```

if...else
```
if (condition) {
  // block of code if condition is true
}
else {
  // block of code if condition is false
}
```
If the condition evaluates true,

the code inside the body of if is executed
the code inside the body of else is skipped from execution
If the condition evaluates false,

the code inside the body of else is executed
the code inside the body of if is skipped from execution

else and else if statements always need if statement
```
#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number >= 0) {
    cout << "You entered a positive integer: " << number << "\n";
  }
  else {
    cout << "You entered a negative integer: " << number << "\n";
  }

  cout << "This line is always printed.";

  return 0;
}
```

if...else...else if statement

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
// Program to check whether an integer is positive, negative or zero

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number > 0) {
    cout << "You entered a positive integer: " << number << "\n";
  } 
  else if (number < 0) {
    cout << "You entered a negative integer: " << number << "\n";
  } 
  else {
    cout << "You entered 0." << endl;
  }

  cout << "This line is always printed.";

  return 0;
}
```
Nested if...else
Sometimes, we need to use an if statement inside another if statement. This is known as nested if statement.

Think of it as multiple layers of if statements. There is a first, outer if statement, and inside it is another, inner if statement. Its syntax is:

// outer if statement
if (condition1) {

  // statements

  // inner if statement
  if (condition2) {
    // statements
  }
}
```
// C++ program to find if an integer is positive, negative or zero
// using nested if statements

#include <iostream>
using namespace std;

int main() {

  int num;
    
  cout << "Enter an integer: ";  
  cin >> num;    

  // outer if condition
  if (num != 0) {
        
    // inner if condition
    if (num > 0) {
      cout << "The number is positive." << "\n";
    }
    // inner else condition
    else {
      cout << "The number is negative." << "\n";
    }  
  }
  // outer else condition
  else {
    cout << "The number is 0 and it is neither positive nor negative." << endl;
  }

  cout << "This line is always printed." << endl;

  return 0;
}
```
if...else With Only One Statement

If the body of if...else has only one statement, you can omit { } in the program. For example, you can replace
```
if (number > 0) {
  cout << "The number is positive." << "\n";
}
else {
  cout << "The number is negative." << "\n";
}
```
with
```
int number = 5;

if (number > 0)
  cout << "The number is positive." << endl;
else
  cout << "The number is negative." << endl;
```
```
#include <iostream>
using namespace std;

int main() {
  int num{-12};
  if (num != 0)
      if(num > 0)
          cout<<"greater than zero\n";
  else
      if(num < 0)
          cout<<"less than zero\n";
}
```
Ternary Operator
