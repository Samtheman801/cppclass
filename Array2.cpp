#include <iostream>
#include <random>

int numbers[1000];

int main() {
    for (int i = 0; i < 1000; i++) {
        numbers[i] = rand() % 99 + 10;
    }
    for (int j = 0; j < 1000; j++) {
        std::cout << numbers[j] << "  ";
    }
}