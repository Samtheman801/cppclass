#include <iostream>

int main() {

    int x[10] = {1,2,3,4,5,6,7,8,9,10}; int y[10];
    // std::cout << x << std::endl;
    // std::cout << &x << std::endl;
    // std::cout << &x[0] << std::endl;

    for(int i = 0; i<11; i++) {
        std::cout << &x[i] << std::endl;
    }

    return 0;
}