#include <iostream>
#include <array>


void incrementCount(int* ptr)//pass by value -> int& count_in_func = count
{

}

void incrementCount(char* ptr)//pass by value -> int& count_in_func = count
{

    using namespace std;
    count_in_func=count_in_func+1;//increments the value of count inside the function
}

int main()
{
    using namespace std;
    int* count=0;// initialze the variable count
    char* alp = &count;
    cout<<"Pass by value\n";
    incrementCount(count, );
    incrementCount(count);
    incrementCount(count);
    incrementCount(count);
    incrementCount(count);

    cout<<"Count:";
    cout<<count;//prints the value of count after the function call
    return 0;
}