When a variable is created in C++, a memory address is allocated to the variable. To access the address, we can use the '&' operator. '&' is called address operator.
For example lets access a variable address.
```
int main()
{
    int foo{0};
    cout << &a << "\n"; // That prints the memory address of foo variable.
    return 0;
}
```
Reference

A reference variable is a “reference” to an existing variable, references are created with the & operator.

Think of a variable name as a label attached to the variable’s address in memory. You can then think of a reference as a second label attached to that memory address. Therefore, you can access the contents of the variable through either the original variable name or the reference.

Example:

In the below example, when we write "int &foo_ref = foo;" We are actually saying "create a reference called foo_ref in the memory address of foo variable". Previously, only foo was attached to the memory address. But right now, there are 2 labels (foo and foo_ref) attached to the memory address.
```
#include <iostream>
using namespace std;

int main()
{
    int foo{0};
    int& foo_ref = foo;
    foo = 20;
    cout<<"foo_ref is : " << foo_ref << "\n";
    cout<<"foo is : " << foo << "\n";
    foo_ref = 100;
    cout<<"foo_res is changed\n ";
    cout<<"foo_ref is : " << foo_ref << "\n";
    cout<<"foo is : " << foo << "\n";
    return 0;
}
```
The memory addresses of foo and foo_ref are same.
