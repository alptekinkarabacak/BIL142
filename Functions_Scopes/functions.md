﻿A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
The thing is don't write long functions, always consider splitting into other functions if have one.

C++ provides some pre-defined functions, such as main(), which is used to execute code. But you can also create your own functions to perform certain actions.

To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ():

```
void myFunction() {
  // code to be executed
}
```

myFunction() is the name of the function. Btw naming is important in programming you should follow some rules in naming.
There are 3 naming styles:

Snakecase: Words are delimited by an underscore.

variable_one
variable_two

Pascalcase: Words are delimited by capital letters.

VariableOne
VariableTwo

Camelcase: Words are delimited by capital letters, except the initial word.

variableOne
variableTwo

When naming a variable you have to follow up some rules. You can not use numbers at the beginning of a name, therefore you can use numbers on middle or at the end.
You can not use special characters like '!', '-', '?', '+'   ,etc

void means that the function does not have a return value. You will learn more about return values later in the next chapter

inside the function (the body), add code that defines what the function should do

To call a function, write the function's name followed by two parentheses () and a semicolon ;

In the following example, myFunction() is used to print a text (the action), when it is called:
```
// Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction(); // call the function
  return 0;
}
```

A function can be called multiple times:
```
void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}
```

Function Declaration and Definition

Declaration: the return type, the name of the function, and parameters (if any)
Definition: the body of the function (code to be executed)
```
void myFunction() { // declaration
  // the body of the function (definition)
}
```

Note: If a user-defined function, such as myFunction() is declared after the main() function, an error will occur:
```
int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}
```
However, it is possible to separate the declaration and the definition of the function - for code optimization.

You will often see C++ programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:
```
// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}
```

TDD (Test Driven Development)

Const Correctness

Memory Scoping in Functions:

Like all structures like Loops, Conditions, Functions has memory scope {}, without indication of memory scope is an error in functions unlike if, for, while loops.
```
inline bool isItDivable(int first, int second)
    return (second == 0) ? false : true;
```
You can create local variables in a function scope like loops or if conditions.
But remember, after end of it's scope it can not accessible.
```
double calculateMultiple(const double first, const int second) {
    int result{0};
    result = first * second;
    return result;
}

++result; // result is not defined error.
```
The only vay protecting the last state of a local variable initialize it  with static keyword. Static variables only created once in the whole lifetime of a executable.
```
#include <iostream>
using namespace std;
#include "Test.h"

void staticLocalFunc();
int main()
{
   staticLocalFunc();
   staticLocalFunc();
   staticLocalFunc();
   staticLocalFunc();
   
   // But still you can not acces foo outside of it' s scope.
}

void staticLocalFunc() {
    int a{20}, b{30};
    int static foo{0};
    cout << "sum is: " << a + b + foo++ << "\n";
}
```
Parameters and Arguments
Information can be passed to functions as a parameter. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:
```
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
```

You can define any count of parameter in a function but, don't push too hard. If you need define lot of parameter always consider wrap parameter into a class.

Default Parameter Value
You can also use a default parameter value, by using the equals sign (=).

If we call the function without an argument, it uses the default value ("Sweden"):
```
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("UK");
  myFunction();
  myFunction("USA");
  return 0;
}
```
Btw is there something wrong with this code?

Default value of a parameter always define in the decleration.

And if you define a default value to a parameter, after that parameter all other parameters must have a default value.
```
void myFunction(int b, string country = "Norway", int a);
```
But why there is a rule like that?

*********** Function Overloading *********

Consider the following example, which have two functions that add numbers of different type:
```
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
```

Instead of defining two functions that should do the same thing, it is better to overload one.

In the example below, we overload the plusFunc function to work for both int and double:
```
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
```

You can overload it with different types or you can overload it different number of parameters.
But you can not overload it with different return values.
What about this one?
```
#include <iostream>
using namespace std;
#include "Test.h"

int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}

int plusFunc(int x, int y, int z) {
    return x + y + z;
}

int plusFunc(int x, int y, int a, int z = 30) {
    return x + y + a + z;
}

int main() {
    int result = plusFunc(1, 2, 3);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;
}
```
Ok, aand this one?

```
#include <iostream>
using namespace std;
#include "Test.h"

int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}

int plusFunc(int x, int y, int z) {
    return x + y + z;
}

int plusFunc(int x, int y, int a, int z = 30, int t = 40) {
    return x + y + a + z;
}

int main() {
    int result = plusFunc(1, 2, 3);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;
}
```

Recursion
Recursion is the technique of making a function call itself. It is replaced with loops.
```
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}

You can return a void function if you want to exit in some case.


```
Lets deep dive into it.

10 + sum(9)
10 + ( 9 + sum(8) )
10 + ( 9 + ( 8 + sum(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0


Fact?


