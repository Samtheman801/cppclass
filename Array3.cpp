#include <iostream>
#include <random>

int numbers1[10], numbers2[10];

int main() {
    for (int i=0; i<10; i++) {
        numbers1[i] = rand() % 100 + 1;
    }
    for (int j=0; j<10; j++) {
        if (j==9) {
            numbers2[j] = -7;
        }
        else {
            numbers2[j] = numbers1[j];
        }
    }
    std::cout << "Array 1: ";
    for (int k=0; k<10; k++) {
        std::cout << numbers1[k] << " ";
    }
    std::cout << "\nArray 2: ";
    for (int m=0; m<10; m++) {
        std::cout << numbers2[m] << " ";
    }
}