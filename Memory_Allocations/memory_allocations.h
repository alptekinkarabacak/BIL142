//
// Created by Alptekin's Macbook on 1.01.2024.
//

#ifndef BIL142_MEMORY_ALLOCATIONS_H
#define BIL142_MEMORY_ALLOCATIONS_H

/*
 * Stack Memory:

Mention that stack memory is used for function calls, local variables, and is automatically managed by the compiler.
 Allocations done in the compile time.
Less size compare with heap memory
 Allocations are faster than the heap memory.
Thats why management done automatically
But you can done it by custom scoping.
Stackoverflow

Heap Memory:

Describe heap memory as a larger, less organized memory space used for dynamic memory allocation.
 allocations are slower than the stack memory allocations.

Emphasize that heap memory requires manual management by the programmer.

 Examples
 * */
// Static Memory Allocation:

int staticVar = 10; // Static allocation
// Dynamic Memory Allocation:
int* dynamicVar = new int(20); // Dynamic allocation
delete dynamicVar; // Deallocating memory
// You want to do nullptr check before delete you can assign it to nullptr after delete
dynamicVar = nullptr;
//Memory Leak and Deallocation:
//Explanation:
//Define memory leaks as unreleased memory that's no longer needed.
//Emphasize the importance of proper deallocation to prevent memory leaks.

// Incorrect: Forgetting to deallocate memory
int* leakingVar = new int(30);
// ... other code
// Memory leak occurs if 'delete leakingVar' is omitted

#endif //BIL142_MEMORY_ALLOCATIONS_H
