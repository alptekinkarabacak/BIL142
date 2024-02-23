Pointers are used for accessing the resources which are external to the program – like heap memory. So, for accessing the heap memory (if anything is created inside heap memory), pointers are used. When accessing any external resource we just use a copy of the resource. If we make any changes to it, we just change it in the copied version. But, if we use a pointer to the resource, we’ll be able to change the original resource.

Problems with Normal Pointers
Some Issues with normal pointers in C++ are as follows:

Memory Leaks: This occurs when memory is repeatedly allocated by a program but never freed. This leads to excessive memory consumption and eventually leads to a system crash.

 Dangling Pointers: A dangling pointer is a pointer that occurs at the time when the object is de-allocated from memory without modifying the value of the pointer.
 
 Wild Pointers: Wild pointers are pointers that are declared and allocated memory but the pointer is never initialized to point to any valid object or address.
  
 Buffer Overflow: When a pointer is used to write data to a memory address that is outside of the allocated memory block. This leads to the corruption of data which can be exploited by malicious attackers.

```

#include <iostream>
using namespace std;
 
class Rectangle {
private:
    int length;
    int breadth;
};
 
void fun()
{
    // By taking a pointer p and
    // dynamically creating object
    // of class rectangle
    Rectangle* p = new Rectangle();
}
 
int main()
{
    // Infinite Loop
    while (1) {
        fun();
    }
}
```

Smart Pointers

As we’ve known unconsciously not deallocating a pointer causes a memory leak that may lead to a crash of the program. Languages Java, C# has Garbage Collection Mechanisms to smartly deallocate unused memory to be used again. The programmer doesn’t have to worry about any memory leaks. C++ comes up with its own mechanism that’s Smart Pointer. When the object is destroyed it frees the memory as well. So, we don’t need to delete it as Smart Pointer does will handle it.

A Smart Pointer is a wrapper class over a pointer with an operator like * and -> overloaded. The objects of the smart pointer class look like normal pointers. But, unlike Normal Pointers it can deallocate and free destroyed object memory.

The idea is to take a class with a pointer, destructor, and overloaded operators like * and ->. Since the destructor is automatically called when an object goes out of scope, the dynamically allocated memory would automatically be deleted (or the reference count can be decremented).
memory header must included.

Unique Pointers

The class unique_ptr is the simplest kind of smart pointers in C++. There are two things you need to know about them.

As soon as they go out of scope, they are automatically deleted. We call such pointers “scoped pointers”. For this reason, they are especially useful when we want to reference dynamically allocated objects within a restricted scope.
You can’t copy them (hence the qualifier unique).
Those two points are connected: if you have a copy x of a scoped pointer y then when y goes out of scope, the memory block to which both x and y are pointing is deallocated. x would thus become a dangling pointer.

For checking Diagrams
https://www.geeksforgeeks.org/smart-pointers-cpp/ 

What you can’t do with unique pointers
As we just said, there are two operations that you cannot perform with unique pointers: copy and assignment. The program below shows two operations that would cause an error:


```
#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(std::string firstValue) {
        member = firstValue;
    }
    void saySomething() {
        std::cout<<"Helloo \n";
    }

    std::string member;
};

void foo(std::unique_ptr<MyClass> bar) {
    bar->saySomething();
}

int main() {
    auto smartPtr = std::make_unique<MyClass>("X");
    auto smartPtr2 = smartPtr;  // ERROR!
    foo(smartPtr); // ERROR!

    return 0;
}
```
If you need to move around a unique pointer and pass it to another function, you may want to use the standard library function move, as described in the example below:

```
void foo(std::unique_ptr<MyClass> bar) {
    bar->saySomething();
}

int main() {
    auto ptr = std::make_unique<MyClass>("X");
    foo(std::move(ptr));
    return 0;

    return 0;
}

```


```

int main() {
    auto smartPtr = std::make_unique<int>(1);
    std::cout << smartPtr << std::endl;
    std::cout << *smartPtr << std::endl;
    
    return 0;
}

```


Shared Pointers

The second kind of smart pointer that exists in C++ is shared pointer. Shared pointers can be copied and the memory block they point to is not deallocated until all other shared pointers that point to it have been destructed. When a shared pointer is instantiated, an extra memory block is allocated. It is called the control block and keeps track of the number of copies that have been made. The object shared pointers point to is deleted as soon as the reference counter reaches 0, that is when the last remaining copy is destroyed or assigned another pointer.

This additional functionality is at the expense of a heavier overhead, so you should not use shared pointers when a unique pointer suffices.



```
#include <iostream>
#include <memory>

int main() {
  auto ptr = std::make_shared<int>(10);

  std::cout << ptr.use_count() << "\n"; // Prints the reference count (1)
  {
    auto ptr2 = ptr; // Reference count is now 2
    std::cout << ptr2.use_count() << '\n'; // Prints the reference count (2)
  } // The ptr2 reaches end of scope, reference count is 1 so resource not freed

  std::cout<< *ptr << "\n";
} // The ptr reaches end of scope, reference count is 0 so resource is freed
```

Weak Pointer

The last kind of smart pointer we cover is weak pointers. Weak pointers are similar to shared pointers except that they have no control block and reference counter. This means that you can share them, but the object they point to may be destroyed before they go out of scope or are assigned another pointer.


```
#include <iostream>
using namespace std;
// Dynamic Memory management library
#include <memory>
 
class Rectangle {
    int length;
    int breadth;
 
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
 
    int area() { return length * breadth; }
};
 
int main()
{
    //---\/ Smart Pointer
    shared_ptr<Rectangle> P1(new Rectangle(10, 5));
   
    // create weak ptr
    weak_ptr<Rectangle> P2 (P1);
   
    // This'll print 50
    cout << P1->area() << endl;
 
    // This'll print 1 as Reference Counter is 1
    cout << P1.use_count() << endl;
    return 0;
}
```

There are two methods you need to know to manipulate weak pointers:

expired: it takes no arguments and returns true is the memory block it points to has been deallocated, false, otherwise;

lock: it takes no arguments and returns expired() ? shared_pointer<T>() : shared_pointer(*this). It is a "safe dereferencing" method as it enables to get the value of the memory block after checking if it has not been deallocated.

```
#include <iostream>
using namespace std;
// Dynamic Memory management library
#include <memory>
 
class Rectangle {
    int length;
    int breadth;
 
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
 
    int area() { return length * breadth; }
};
 
int main()
{
    std::weak_ptr<MyClass> weakPtr;

    {
        // New scope
        auto sharedPtr = std::make_shared<MyClass>("X");
        weakPtr = sharedPtr;
    }

    std::shared_ptr<MyClass> weakPtrValue = weakPtr.lock();
    if (weakPtrValue) {
    } 
    else {
        std::cout << "weakPtr points to a deallocated block";
    }

    return 0;

}
```

Weak pointers have two main advantages:

They prevent errors caused by dangling pointers: by providing a way of checking whether the block they point to has been deallocated, they prevent users from dereferencing and manipulating dangling pointers.

They address circular dependency issues. For example, if you run the following code:

```

class A {
public:
    ~A() {std::cout << "An instance of A is dying…" << std::endl;}

    void setB(std::shared_ptr<B> _b) {
        b = _b;
    }

private:
    std::shared_ptr<B> b;
};

class B {
public:
    ~B() {std::cout << "An instance of B is dying…" << std::endl;}

    void setA(std::shared_ptr<A> _a) {
        a = _a;
    }

private:
    std::shared_ptr<A> a;
};

int main() {
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();

    a->setB(b);
    b->setA(a);

    return 0;
}
```

then neither a nor b will be destructed: b cannot be destructed as long as a is alive, because a contains a reference to b and similarly, a cannot be destructed because b contains a reference to it. This causes a memory leak.

To avoid this problem, we can simply change the type of the attributes a and b of B and A from shared_ptr to weak_ptr.




