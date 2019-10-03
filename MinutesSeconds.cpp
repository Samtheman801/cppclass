#include<iostream>
using namespace std;

int main() {
    cout << "Enter Time in Seconds: ";
    int inputtedSeconds;
    cin >> inputtedSeconds;
    int calculatedMinutes; int calculatedSeconds;
    calculatedMinutes = (inputtedSeconds/60);
    calculatedSeconds = (inputtedSeconds%60);
    cout << calculatedMinutes << " Minute(s) and " << calculatedSeconds << " Seconds." << endl;
}