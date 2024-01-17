
If Statement / If Condition

In computer programming, we use the if...else statement to run one block of code under certain conditions and another block of code under different conditions.
Conditions help you to create business logic.

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
A ternary operator evaluates the test condition and executes a block of code based on the result of the condition.

Its syntax is

condition ? expression1 : expression2;

Here, condition is evaluated and

if condition is true, expression1 is executed.
And, if condition is false, expression2 is executed.
The ternary operator takes 3 operands (condition, expression1 and expression2). Hence, the name ternary operator.
```
#include <iostream>
#include <string>
using namespace std;

int main() {
  double marks;

  // take input from users
  cout << "Enter your marks: ";
  cin >> marks;

  // ternary operator checks if
  // marks is greater than 40
  string result = (marks >= 40) ? "passed" : "failed";

  cout << "You " << result << " the exam.";

  return 0;
}
```
Nested Ternary Operators
```
#include <iostream>
#include <string>
using namespace std;

int main() {
  int number = 25;
  string result;

  // nested ternary operator to find whether
  // number is positive, negative, or zero
  result = (number == 0) ? "Zero" : ((number > 0) ? "Bla" : "Boom");

  cout << "Number is " << result;

  return 0;
}
```





switch..case Statement
The switch statement allows us to execute a block of code among many alternatives.
switch (expression)  {
    case constant1: // constant is important!!!!
        // code to be executed if 
        // expression is equal to constant1;
        break;

    case constant2:
        // code to be executed if
        // expression is equal to constant2;
        break;
        .
        .
        .
    default:
        // code to be executed if
        // expression doesn't match any constant
}

How does the switch statement work?

The expression is evaluated once and compared with the values of each case label.

If there is a match, the corresponding code after the matching label is executed. For example, if the value of the variable is equal to constant2, the code after case constant2: is executed until the break statement is encountered.
If there is no match, the code after default: is executed.

Note: We can do the same thing with the if...else..if ladder. However, the syntax of the switch statement is cleaner and much easier to read and write.
```
int day{4};
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout << "Undefined day";
    break;
}
```
Dont forget break the statement with break;
You can use nested switch cases
```
int main() {
    int day{4};
    int hour{13};
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday ";
            switch (hour) {
                case 0:
                    cout << "Midnight ";
                case 13:
                    cout << "Afternoon";
                case 18:
                    cout << "Evening";
            }
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Undefined day";
            break;
    }
}
```
Cyclomatic Complexity

Cyclomatic complexity is a software metric used to indicate the complexity of a program
More control cases cause more complexity. Try to split them into different functions or classes maybe.
```
int x{25}, y{12}
int result = 0;
    if (x > 0) 
    {
        if (y > 0) {
            result = x + y;
        } 
        else if (y < 0) {
            result = x - y;
        } 
        else {
            result = x * y;
        }
    } 
    else if (x < 0) {
        if (y > 0) {
            result = y - x;
        } else if (y < 0) {
            result = x * y;
        } else {
            result = x / y;
        }
    } 
    else {
        if (y > 0) {
            result = x * y + 1;
        } else if (y < 0) {
            result = x * y - 1;
        } else {
            result = x * y * y;
        }
    }
```
Find Largest Number Among Numbers Using if...else Statement
```
#include <iostream>
using namespace std;

int main() {
    // The numbers are 13.3, 8.2, -23.0
    
    
  
    return 0;
}
```

LOOPS

In Programming, sometimes there is a need to perform some operation more than once or (say) n number of times. Loops come into use when we need to repeatedly execute a block of statements. 

For example: Suppose we want to print “Hello World” 10 times. This can be done in two ways as shown

Manually we have to write cout for the C++ statement 10 times. Let’s say you have to write it 20 times (it would surely take more time to write 20 statements) now imagine you have to write it 100 times, helps you to avoid cut and pasted code.

There are mainly two types of loops:

Entry Controlled loops: In this type of loop, the test condition is tested before entering the loop body. For Loop and While Loop is entry-controlled loops.

Exit Controlled Loops: In this type of loop the test condition is tested or evaluated at the end of the loop body. Therefore, the loop body will execute at least once, irrespective of whether the test condition is true or false. the do-while loop is exit controlled loop.

For Loop-

A For loop is a repetition control structure that allows us to write a loop that is executed a specific number of times. The loop enables us to perform n number of steps together in one line. 

Syntax:

for (initialization expr; test expr; update expr)
{    
     // body of the loop
     // statements we want to execute
}

```
#include <iostream>
using namespace std;
 
int main()
{
    for (int i{1}; i <= 5; i++) {
        cout << "Hello World\n";
    }
 
    return 0;
}
```
What if this one:
```
#include <iostream>
using namespace std;
 
int main()
{
    for (int i{1}; i < 1; i++) {
        cout << "Hello World\n";
    }
 
    return 0;
}
```
Flow is like this: 
1) initialize the expression or expressions 
2) Check the condition or conditions
3) Run the body of the for loop
4) Update expression or expressions
5) Return to step 2

For loop can also be valid in the given form:-
```
#include <iostream>
using namespace std;
 
int main()
{
    for (int i = 0, j = 10, k = 20; (i + j + k) < 100;
         j++, k--, i += k) {
        cout << i << " " << j << " " << k << "\n";
    }
    return 0;
}
```

Before we continue to loops lets talk about scope and scoping.

In general, the scope is defined as the extent up to which something can be worked with. In programming also the scope of a variable is defined as the extent of the program code within which the variable can be accessed or declared or worked with.
The variables declared inside in a scope is called local variables.

Scoping is performed by ‘{‘ and ‘}’. 

Local variables do not exist outside the block in which they are declared, i.e. they can not be accessed or used outside that block.

Because at the end of the scope all local variables will be deleted. Except it is defined static. We will deep dive into static variables.

Not only needs loops or if else statements for creating scopes.
Lets create a scope without using these structures:
```  
int main()
{
    int bar = 10;
    {
        int foo{1};
        foo += bar;
        cout<< "\nValue of local foo is " << foo << "\n";
    }
    return 0;
}
```
Or we can create another variable with the same name a variable which is on outer scope
```
#include <iostream>
using namespace std;

int main()
{
    int bar = 10;
    {
        int foo{1};
        int bar{2};
        foo += bar;
        cout<< "\nValue of local foo is " << foo << "\n";
        cout<< "\nValue of inner bar is " << bar << "\n";
    }

    cout<< "\nValue of outer bar is " << bar << "\n";

    return 0;
}

```

Because of deleting of local variables at the end of the scope, you can not access 'i'.
```
for (int i{1}; i < 1; i++) {
        cout << "Hello World\n";
}
++i;

```
An example of hiding declared variables before a loop is:
```
int main()
{
    int i = 99;
    for (int i = 0; i < 5; i++) {
        cout << i << "\t";
    }
    cout << "\n" << i;
    return 0;
}
```

But if you want to use the already declared variable and not hide it, then must not redeclare that variable.
```
#include <iostream>
using namespace std;
 
int main()
{
    int i = 99;
    for (i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << "\n" << i;
    return 0;
}
```



// TODO: Loop exit with switch break, Volatile and cpu usage.

