#include<iostream>
#include<math.h>
using namespace std;

int main() {
    cout << "Enter Temperature in Fahrenheit: ";
    int tempF;
    cin >> tempF;
    double tempC;
    tempC = ((5.0/9)*(tempF-32));
    cout << "Temperature in Celcius: " << round(tempC*100)/100 << endl;
}