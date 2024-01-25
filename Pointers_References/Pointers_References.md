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
You can not assign another address with '&' operator.
```
#include <iostream>
using namespace std;

int main()
{
    int foo{0};
    int& foo_ref = foo;
    &foo = 0x1253495;
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
    cout<<"foo_ref is changed\n ";
    cout<<"foo_ref is : " << foo_ref << "\n";
    cout<<"foo is : " << foo << "\n";
    return 0;
}
```
The memory addresses of foo and foo_ref are same.
```
#include <iostream>
using namespace std;

int main()
{
    int foo{0};
    int& foo_ref = foo;
    foo = 20;
    cout<<" Address of foo_ref is : " << &foo_ref << "\n";
    cout<<"Address of foo is : " << &foo << "\n";
    return 0;
}
```
Reference definition only performed on the definition. A reference to a variable can not refer to another variable after the definition of the reference.
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int foo{0};
    int& foo_ref = foo;
    foo = 20;
    int bar{30};
    &foo_ref = bar;
    
    return 0;
}
```
Or you can not decleare a reference without initializing.
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int foo{0};
    int& foo_ref;
    
    return 0;
}
```
ADDRESS OPERATOR AND REFERENCING ARE NOT THE SAME THINGS, THEIR USAGES ARE DIFFERENT.

Pointers
Before learning what’s a pointer, let’s first understand why we need it. Generally, pointers are used for performance improvements. Imagine we have a variable x, which is a big variable (uses a lot of memory) . And we want to pass this variable x to a function. If we pass it normally by functionName(x), the x in the function will be copied from the original variable x. So we'll store both the original and big x variable and the copied big x variable in memory (storing 2 big variables). If the x variable was a small one, we could've discarded it but right now it can cause performance problems. How can we solve this problem?

Well, you know we can access the memory address of a variable, why not we just pass the memory address of x variable to the function? That way we wouldn’t have to store 2 big variables in memory, instead, we store 1 big variable and 1 small (a memory address is a very small variable) and that would increase the performance of our code.

So, what’s a pointer? A pointer is a variable that stores the memory address. In the above example, we could easily pass a pointer of x to the function.

Pointers store a memory address, so we can also access the memory address and change the data in it.

A pointer is created with the * operator:
```
int* foo;
double* bar;
char* bla;
```
Dont forget this: a, b and c all are a pointer. But, foo must point to integer, bar must be point to double, and bla must be point char. But at the end, these all are a pointer.


When we create a pointer always need an address or maybe after initializing it, we need another address.
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int* foo;
    double* bar;
    char* bla;
    cout << "size of foo pointer is: " << sizeof(foo) << "\n";
    cout << "size of bar pointer is: " << sizeof(bar) << "\n";
    cout << "size of bla pointer is: " << sizeof(bla) << "\n";
}
```
You see that all the pointer sizes are the same because they are pointers and the size of a pointer does not relate with which data type points. Pointer sizes are related to the processor architecture. It is too important to understand this to understand pointers.
```
int* foo; 
```
foo is a pointer variable so it stores an address in it
When you try to print the value of foo you get an address.
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int* foo;
    cout<<"The value of foo is: " << foo << "\n";
}
```
So, assigning a pointer needs address and the address
But you can not assign it to an address with 0x..... because 0x... is basically and integer value, you can not assign pointer to an integer.
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int* foo;
    foo = 0x10077dbd0;
}
```
The only way to do that perform it with an address operator, 
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int* alp;
    int value;
    alp = &value;
}
```

or assign it to another pointer.
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int* foo;
    int* bar;
    foo = bar;
}
```
In the example above foo and bar pointers point same address.

Dont remember integer pointer typed value needs an integer to point, or a double pointer typed value needs a double.
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int* foo;
    double* bar;
    foo = bar;
    // or
    int* alp;
    double value;
    alp = &value;
}
These assignments are compile errors.






