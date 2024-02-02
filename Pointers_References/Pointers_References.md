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
And always initialize a pointer with nullptr, or a valid address.
```
int* foo{nullptr};
double* bar{nullptr};
char* bla{nullptr};
```
Dont forget this: a, b and c all are a pointer. But, foo must point to integer, bar must be point to double, and bla must be point char. But at the end, these all are a pointer.


When we create a pointer always need an address or maybe after initializing it, we need another address.
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int* foo{nullptr};
    double* bar{nullptr};
    char* bla{nullptr};
    cout << "size of foo pointer is: " << sizeof(foo) << "\n";
    cout << "size of bar pointer is: " << sizeof(bar) << "\n";
    cout << "size of bla pointer is: " << sizeof(bla) << "\n";
}
```
You see that all the pointer sizes are the same because they are pointers and the size of a pointer does not relate with which data type points. Pointer sizes are related to the processor architecture. It is too important to understand this to understand pointers.
```
int* foo{nullptr}; 
```
foo is a pointer variable so it stores an address in it
When you try to print the value of foo you get an address.
```
#include <iostream>
using namespace std;
#include "Test.h"

int main()
{
    int* foo{nullptr};
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
    int* foo{nullptr};
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
    int* alp{nullptr};
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
    int* foo{nullptr};
    int* bar{nullptr};
    foo = bar;
}
```
In the example above foo and bar pointers point same address.

Dont forget integer pointer typed value needs an integer to point, or a double pointer typed value needs a double.
```
#include <iostream>
using namespace std;

int main()
{
    int* foo{nullptr};
    double* bar{nullptr};
    foo = bar;
    // or
    int* alp{nullptr};
    double value;
    alp = &value;
}
```
These assignments are compile errors.

Dereferencing:
How Can I assign a value to a pointer that points?
Is below legal?

```
int* foo{12}; 
```
Or this?

```
int* foo;
foo = 12;
```

We need dereference operator to access the value of pointer points.
We can dereference a pointer to get the data in the memory address that pointer stores.

```
#include <iostream>
using namespace std;

int main()
{
    int foo{20};
    int* foo_ptr{nullptr};
    foo_ptr = &foo;
}
```
Dont confuse about the '*' operator.
When you use '*' in declaration, it creates a pointer variable.
Otherwise, it is a deference operator.

```
#include <iostream>
using namespace std;

int main()
{
    int foo{20};
    int* foo_ptr{nullptr};
    foo_ptr = &foo;
    cout << foo << "\n";
    cout << *foo_ptr << "\n";
    *foo_ptr = 30;
    cout << foo << "\n";
    cout << *foo_ptr << "\n";
}
```

Ok how Can I create a pointer and assign a value to that pointer without another variable?
First we need to talk about stack and heap memory.
Heap memory and stack memory is two different memory concepts of RAM of a processor.

Stack memory:

The size of memory to be allocated is known to the compiler and whenever a function is called, its variables get memory allocated on the stack. And whenever the function call is over, the memory for the variables is de-allocated. This all happens using some predefined routines in the compiler. A programmer does not have to worry about memory allocation and de-allocation of stack variables. This kind of memory allocation is also known as Temporary memory allocation because as soon as the method finishes its execution all the data belonging to that method flushes out from the stack automatically. This means any value stored in the stack memory scheme is accessible as long as the method hasn’t completed its execution and is currently running.

```
// All these variables get memory
  // allocated on stack
  int a;
  int b[10];
  int n = 20;
  int c[n];
```

Heap Memory:

The memory is allocated during the execution of instructions written by programmers. Note that the name heap has nothing to do with the heap data structure. It is called a heap because it is a pile of memory space available to programmers to allocate and de-allocate. Every time when we made an object it always creates in Heap-space and the referencing information to these objects is always stored in Stack-memory. Heap memory allocation isn’t as safe as Stack memory allocation because the data stored in this space is accessible or visible to all threads. If a programmer does not handle this memory well, a memory leak can happen in the program.

```
#include <iostream>
#include <array>
using namespace std;

int main()
{
    int* foo = new int(10); // initialize with 10
    int* bar = new int();
    double* baz = new double();
    char* boom = new char();
    // or block of memory
    int* ptr  = new int[10];
}
```

or

```
#include <iostream>
#include <array>
using namespace std;

int main()
{
    size_t size_of_ptr;
    int* block_of_data{nullptr};
    cout << "Enter a size for block of data\n ";
    cin >> size_of_ptr;
    block_of_data = new int(size_of_ptr);
    cout << "Memory is allocated with size: " << size_of_ptr << "\n";
    block_of_data[3] = 30;
    cout << block_of_data[3] << "\n";
}
```

But you can not these types of things with stack allocations

```
#include <iostream>
#include <array>
using namespace std;

int main()
{
    size_t size_of_ptr;
    int block_of_data[];
}
```

Only way to this in dynamically is:

```
#include <iostream>
#include <array>
using namespace std;

int main()
{
    size_t size_of_ptr;
    cout << "Enter a size for block of data\n ";
    cin >> size_of_ptr;
    int block_of_data[size_of_ptr];
    cout << "Memory is allocated with size: " << size_of_ptr << "\n";
}
```


Dont forget the deallocate the pointer with delete.

```
#include <iostream>
#include <array>
using namespace std;

int main()
{
    int* foo = new int(10); // initialize with 10
    int* bar = new int();
    double* baz = new double();
    char* boom = new char();
    // or block of memory
    int* ptr  = new int[10];
    delete foo, bar, baz, boom;
    delete[] ptr;
}
```
If you dont memory is not deallocated and you can not access that address anymore.
But of course if the program finished, all the memory is released.

Key Differences Between Stack and Heap Allocations 
 

In a stack, the allocation and de-allocation are automatically done by the compiler whereas, in heap, it needs to be done by the programmer manually.
Handling the Heap frame is costlier than handling the stack frame.
Memory shortage problem is more likely to happen in stack whereas the main issue in heap memory is fragmentation.
Stack frame access is easier than the heap frame as the stack has a small region of memory and is cache-friendly but in the case of heap frames which are dispersed throughout the memory so it causes more cache misses.
A stack is not flexible, the memory size allotted cannot be changed whereas a heap is flexible, and the allotted memory can be altered.
Accessing the time of heap takes is more than a stack.


Question: int **pptr how can I assign this a value?
```
#include <iostream>
#include <array>


int main()
{
    int foo = 1453;
    int *ptr = &foo;
    int **pptr = ptr;
}
```

```
#include <iostream>
using namespace std;

int main()
{

    int* foo_ptr;
    {
        int foo{20};
        foo_ptr = &foo;
    }
    
    cout << *foo_ptr;
}
```


```
#include <iostream>
#include <array>
using namespace std;

int main()
{
    size_t size_of_ptr;
    int* block_of_data{nullptr};
    cout << "Enter a size for block of data\n ";
    cin >> size_of_ptr;
    block_of_data  = new int(size_of_ptr);
    cout << "Memory is allocated with size: " << size_of_ptr << "\n";
    block_of_data[20] = 30;
    cout << "The value of the 20th index is: " << block_of_data[20] << "\n";
}
```

Thats why dont use pointer arrays, you must use std data containers like vectors, arrays for storing block of data.

```
#include <iostream>
#include <array>
using namespace std;

int main()
{
    const size_t size_of_data{5};
    std::array<int, size_of_data> block_of_data;
    cout << "Enter a size for block of data\n ";
    block_of_data.at(20) = 30;
    cout << "The value of the 20th index is: " << block_of_data.at(20) << "\n";
}
```

Standard Library Containers

Always use standard library containers instead of raw pointers, to store sequential data. There are a lot of data structures to store multiple data, vector, array, map, set, pair... etc.

Standard Library Array
You have to include <array> to use std::array
syntax is:
```
std::array<type, size> nameOfArray
```
```
#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> ar1;
    std::array<int, 5> ar2{0, 0, 0, 0, 0};
    std::array<int, 5> ar3  = {0, 0, 0, 0, 0};
}
```
You can use lot of std::array functions to do some basic jobs, like size(), empty(), swap() for swapping two arrays.
Another main advantage of using std::array is, you can access the size of an array. Or you can overload with different sized arrays
```
#include <iostream>
#include <array>

void func(std::array<int, 6> foo) {

}

void func(std::array<int, 5> foo) {

}

int main()
{
    std::array<int, 5> ar1;
    std::array<int, 5> ar2{0, 0, 0, 0, 0};
    std::array<int, 5> ar3  = {0, 0, 0, 0, 0};
    func(ar1);
}
```
When you are using array on stack, you have to do some mathematical calculation, 
But when you are using pointer on heap, you can not access the size.

If the size is not known you can use std::vector.
Standard Library Vector
You have to include vector library to your code.
```

#include <iostream>
#include <vector>


int main()
{
    std::vector<int> g1;
    std::vector<int> g2(10);
    std::vector<int> g3{1, 2, 3, 4};
    // To add new element to a vector.
    g1.emplace_back(5);
    g1.emplace_back(6);
    g1.emplace_back(7);
    std::cout<<g1.size();
    // Describe the expanding the memory
}
```
To erase element or elements from a vector there are 3 methods:
1) pop_back()
```
#include <iostream> 
#include <vector> 
using namespace std; 
 
int main(){ 
    vector<int> v; 
    v.push_back(3);           //Insert element 3 
    v.push_back(5);           //Insert element 5 
    v.push_back(7);           //Insert element 7 
     
    //vector(v) has 3 elements with size 3 
 
    v.pop_back();            //This method will remove the last element 
 
    for(int i=0;i<v.size();i++){ 
        cout << v[i] << " "; 
    } 
     
    return 0; 
}
```
2) erase()
```
#include <iostream> 
#include <vector> 
using namespace std; 
 
int main(){ 
    vector<int> v; 
     
    //Insert values 0 to 5 
    for(int i=0;i<=5;i++) 
        v.push_back(i); 
     
    //vector has [0,1,2,3,4,5] 
 
    //erase the 5th element 
    v.erase(v.begin()+4); 
 
    //erase first 3 elements 
    v.erase(v.begin(),v.begin()+3); 
 
    for(int i=0;i<v.size();i++){ 
        cout << v[i] << " "; 
    } 
     
    return 0; 
}
```
3) clear
```
#include <iostream> 
#include <vector> 
using namespace std; 
 
int main(){ 
    vector<int> v; 
    v.push_back(5);    //Insert element 5 
    v.push_back(10);   //Insert element 10 
     
    //Empty the vector 
    v.clear(); 
    v.push_back(11);    //Insert element 11 
    v.push_back(12);    //Insert element 12 
 
    //In the end, the vector contains elements 11 and 12  
     
    for(int i=0;i<v.size();i++){ 
        cout << v[i] << " "; 
    } 
         
    return 0; 
}
```

for each loop in c++ 

Syntax:
```
for (data_type  variable_name : container_name) {

     operations using variable_name

}
```

```
#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 10, 20, 30, 40 };
 
    // Printing elements of an array using
    // foreach loop 
    // Here, int is the data type, x is the variable name 
    // and arr is the array for which we want to iterate foreach
      cout<<"Traversing the array with foreach using array's data type: ";
    for (int x : arr) {
        cout<<x<<" ";
    }
       
      // data type of x is set as int
    cout<<"\nTraversing the array with foreach using auto keyword     : ";

      for (auto x : arr) {
          cout<<x<<" ";
      }
}
```

```
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<string> value{ "This",    "is",    "foreach",
                          "example", "using", "vector." };

    cout << "Traversing the vector with foreach using "
            "vector's data type: ";

    for (string v : value) {
        cout << v << " ";
    }

    cout << "\nTraversing the vector with foreach using "
            "auto keyword      : ";

    for (auto v : value) {
        cout << v << " ";
    }

    return 0;
}
```
What about if I try the change the value with for each?

Function Calling Techniques
In C++, we can pass parameters to a function, by values, by pointers, or by reference. 

Let’s first understand what Passing by value mean:

Pass by value means that a copy of the actual parameter’s value is made in memory, i.e. the caller and callee have two independent variables with the same value. If the callee modifies the parameter value, the effect is not visible to the caller.

Overview:

Passes an argument by value.
Callee does not have any access to the underlying element in the calling code.
A copy of the data is sent to the callee.
Changes made to the passed variable do not affect the actual value.

```
void incrementCount(int count)//pass by value
{
  count=count+1;//increments the value of count inside the function
}

int main()
{
  int count=0;// initialze the variable count
  int result=0;//  initialze the variable result
  incrementCount(count);//call increment function
  cout<<"Pass by value\n";
  cout<<"Count:";
  cout<<count;//prints the value of count after the function call
  return 0;
}
```
So, when we try to print the address of count:

```
#include <iostream>
#include <array>

void incrementCount(int count)//pass by value
{
    using namespace std;
    count=count+1;//increments the value of count inside the function
    cout<< "Count value in the function is: " << count << "\n";
    cout<< "The address of count value in the function is: " << &count << "\n";
}

int main()
{
    using namespace std;
    int count=0;// initialze the variable count
    int result=0;//  initialze the variable result
    cout<< "The address of count value in the main is: " << &count << "\n";
    incrementCount(count);//call increment function
    cout<<"Pass by value\n";
    cout<< "Count value in the main is: " << count << "\n";
    return 0;
}
```
See the address of count value is totally different. 
When you called a function with value, the changes are only visible in the function.

Passing by Pointer

Here, the memory location (address) of the variables is passed to the parameters in the function, and then the operations are performed. It is also called the call by pointer method.
```
#include <iostream>
#include <array>
void incrementCount(int* count)//pass by value
{
    *count=*count+1;//increments the value of count inside the function
}

int main()
{
    using namespace  std;
    int count=0;// initialze the variable count
    cout<<"Pass by value\n";
    cout<<"Count:";
    cout<<count;//prints the value of count after the function call
    return 0;
}
```

Passing By Reference
It allows a function to modify a variable without having to create a copy of it. We have to declare reference variables. The memory location of the passed variable and parameter is the same and therefore, any change to the parameter reflects in the variable as well.

It is also called the Call by Reference method.
```
#include <iostream>
#include <array>
void incrementCount(int& count)//pass by value
{
    count=count+1;//increments the value of count inside the function
}

int main()
{
    using namespace  std;
    int count=0;// initialze the variable count
    cout<<"Pass by value\n";
    cout<<"Count:";
    cout<<count;//prints the value of count after the function call
    return 0;
}
```

Which is preferred, Passing by Pointer Vs Passing by Reference in C++? 
References are usually preferred over pointers whenever we don’t need “reseating”.
If we want to use NULL in our function arguments, prefer pointers.
Overall, Use references when you can, and pointers when you have to.

Dont forget to attention to const correctness

Swap?









