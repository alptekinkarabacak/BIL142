#include <iostream>
#include "limits"


int main() {
    int a = 10, b = 20;
    int sum = a + b;
    int difference = b - a;
    float result = static_cast<float>(a) / b;

   // float preciseResult = static_cast<float>(b) / a
    std::cout<<"Size is: "<<result <<"\n";
    return 0;
}
