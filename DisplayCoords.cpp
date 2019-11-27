#include <iostream>
using namespace std;

int coord1, coord2;

int main() {
    int numbers [6] = {0,1,2,3,4,5};
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            coord1 = numbers[i];
            coord2 = numbers[j];
            cout << "(" << coord1 << "," << coord2 << ") ";
        }
        cout << "\n";
    }
    return 0;
}