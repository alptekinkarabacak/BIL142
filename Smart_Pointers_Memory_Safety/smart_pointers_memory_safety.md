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

What about this one?

```
#include <iostream>
#include <memory>


class A {
public:
    std::shared_ptr<B> b_ptr;
    A() { std::cout << "A Constructor\n"; }
    ~A() { std::cout << "A Destructor\n"; }
};

class B {
public:
    std::shared_ptr<A> a_ptr;
    B() { std::cout << "B Constructor\n"; }
    ~B() { std::cout << "B Destructor\n"; }
};

int main() {
    {
        std::shared_ptr<A> a = std::make_shared<A>();
        std::shared_ptr<B> b = std::make_shared<B>();

        a->b_ptr = b;
        b->a_ptr = a;

        std::cout << "Inside scope:" << std::endl;
        std::cout << "a use_count: " << a.use_count() << std::endl; // Expected to be 2
        std::cout << "b use_count: " << b.use_count() << std::endl; // Expected to be 2
    }
    // a and b go out of scope here, but destructors won't be called due to circular dependency

    // Note: Since a and b are out of scope, we cannot check their use_count here.
    // The demonstration of the circular dependency is the lack of "Destructor" messages.

    return 0;
}


```

This code creates a block scope {} within main() where std::shared_ptr<A> and std::shared_ptr<B> are declared and initialized. By establishing a circular reference between a and b through their member variables, and then allowing a and b to go out of scope, we would expect both A and B to be destroyed automatically when their std::shared_ptr containers are destroyed. However, due to the circular reference, their use counts never drop to zero, and thus their destructors are not called. This behavior is evidenced by the absence of destructor messages ("A Destructor" and "B Destructor") in the output.


Weak Pointer

The last kind of smart pointer we cover is weak pointers. Weak pointers are similar to shared pointers except that they have no control block and reference counter. This means that you can share them, but the object they point to may be destroyed before they go out of scope or are assigned another pointer.


```
#include <iostream>
#include <memory>

class B; // Forward declaration

class A {
public:
    std::shared_ptr<B> b_ptr; // A owns B
    A() { std::cout << "A Constructor\n"; }
    ~A() { std::cout << "A Destructor\n"; }
};

class B {
public:
    std::weak_ptr<A> a_ptr; // B weakly references A
    B() { std::cout << "B Constructor\n"; }
    ~B() { std::cout << "B Destructor\n"; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->b_ptr = b;
    b->a_ptr = a; // Now a weak_ptr assignment

    // Use use_count() to demonstrate the lack of a circular dependency
    std::cout << "a use_count (should be 1): " << a.use_count() << std::endl;
    std::cout << "b use_count (should be 1): " << b.use_count() << std::endl;

    // No need to manually reset to break the cycle
    // The destructors will be called automatically when the scope ends

    return 0;
}

```

There are two methods you need to know to manipulate weak pointers:

expired: it takes no arguments and returns true is the memory block it points to has been deallocated, false, otherwise;

lock
Purpose of lock()
std::weak_ptr is designed to break circular references that can occur with std::shared_ptr, but it does not own the object it points to. Instead, it merely observes the object. This means that the object a std::weak_ptr points to can be destroyed if all std::shared_ptr instances that share ownership of the object are destroyed or reset. lock() provides a safe way to access the object, but only if it still exists.

How lock() Works
When lock() is called on a std::weak_ptr, it checks whether the object it points to still exists. If the object exists (i.e., if there is at least one std::shared_ptr that owns the object), lock() creates and returns a new std::shared_ptr that shares ownership of the object. This ensures that the object won't be destroyed while the returned std::shared_ptr exists. If the object has already been destroyed (i.e., there are no std::shared_ptr instances owning the object), lock() returns an empty std::shared_ptr.

```
#include <iostream>
#include <memory>

class Example {
public:
    void show() { std::cout << "Example::show()" << std::endl; }
};

void accessResource(const std::weak_ptr<Example>& wp) {
    // Attempt to access the object through wp using lock()
    std::shared_ptr<Example> tempSp = wp.lock();
    if (tempSp) {
        // The object exists, and tempSp now shares ownership
        tempSp->show();
    } else {
        // The object has been destroyed, and tempSp is empty
        std::cout << "Object no longer exists." << std::endl;
    }
}

int main() {
    std::weak_ptr<Example> wp;
    {
        std::shared_ptr<Example> sp = std::make_shared<Example>();
        wp = sp; // wp observes sp

        // Access the resource while sp is still in scope
        std::cout << "Accessing resource while it exists:" << std::endl;
        accessResource(wp);
    } // sp goes out of scope here, and the Example object is destroyed

    // Try to access the object through wp after sp has gone out of scope
    std::cout << "Attempting to access resource after it has been destroyed:" << std::endl;
    accessResource(wp);

    return 0;
}
```
Let's break the code

The accessResource function attempts to access and use the Example object through a std::weak_ptr by converting it to a std::shared_ptr using lock().

Initially, sp is in scope, and the Example object exists, so accessResource can successfully use tempSp to call show().

Once sp goes out of scope, the Example object is automatically destroyed because there are no std::shared_ptr instances managing it anymore.

After sp goes out of scope, calling accessResource again demonstrates that attempting to access the Example object through wp results in tempSp being an empty pointer. This is because lock() failed to lock onto the resource (since it no longer exists), highlighting how lock() can be used to safely attempt access to resources that might have been deleted.


