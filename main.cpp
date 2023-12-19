#include <iostream>
#include "limits"


int main() {
    for (int i = 0, j = 0; i < 5; i++, j--) {
        std::cout << i << " ";
        std::cout << j << "\n";
    }
    return 0;
}
