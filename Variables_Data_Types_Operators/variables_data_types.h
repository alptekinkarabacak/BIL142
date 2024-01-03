//
// Created by Alptekin's Macbook on 19.12.2023.
//

#ifndef BIL142_VARIABLES_DATA_TYPES_H
#define BIL142_VARIABLES_DATA_TYPES_H
#include <limits>

/*
 * Fundamental Data Types:
Explain the limitations and appropriate use cases for each type.
* int, char float, double... primitive data types
 * sizeof() function
 * UpperLimits -> std::numeric_limits<bool>::lowest()
               std::numeric_limits<bool>::min()
               std::numeric_limits<bool>::max()
 * int foo; -> Decleration
 * int foo = 5 -> initialization
 * const int foo;
 * int for{5}; -> Another initialization technique, always prefer this one!
 * Custom Data Types:
 * struct, classes
 * You can also use auto for everything, but you have to be careful
 * */



/*
 * Operators:
Arithmetic Operators:
arithmetic operators: +, -, *, /, %.
int a = 10, b = 20;
int sum = a + b;
int difference = b - a;
float result = b / a Is there a problem on this?;
float preciseResult = static_cast<float>(b) / a; // Casting for precise division
 * post increment and pre increment
* btw always stay away from c type casting
 *
 * */

/*  Logical and Relational Operators
bool isTrue = true, isFalse = false;
bool result = (isTrue && !isFalse) || (5 > 3);
Assignment Operators
int x = 10;
x += 5; // Equivalent to x = x + 5;
x *= 2; // Equivalent to x = x * 2;
 *
 * */

#endif //BIL142_VARIABLES_DATA_TYPES_H
