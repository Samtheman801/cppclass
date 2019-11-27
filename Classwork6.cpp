#include <iostream>
using namespace std;

double rainfall[11];
double jan, feb, march, april, may, june, july, aug, sept, october, nov, december;
bool again;
double getTotal(double array[], int);
double getAverage(double array[], int);

int main() {
    
    cout << "Enter rainfall in inches..." << endl;
    
    do {
        cout << "January: ";
        cin >> jan;
        rainfall[0] = jan;

        if (jan < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);
    
    do {
        cout << "Febuary: ";
        cin >> feb;
        rainfall[1] = feb;

        if (feb < 0) {
            again = true;
        }
        else {
            again = false;
        }

    } while(again);

    do {
        cout << "March: ";
        cin >> march;
        rainfall[2] = march;

        if (march < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);

    do {
        cout << "April: ";
        cin >> april;
        rainfall[3] = april;

        if (april < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);

    do {
        cout << "May: ";
        cin >> may;
        rainfall[4] = may;

        if (jan < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);

    do {
        cout << "June: ";
        cin >> june;
        rainfall[5] = june;

        if (june < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);

    do {
        cout << "July: ";
        cin >> july;
        rainfall[6] = july;

        if (july < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);

    do {
        cout << "August: ";
        cin >> aug;
        rainfall[7] = aug;

        if (aug < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);

    do {
        cout << "September: ";
        cin >> sept;
        rainfall[8] = sept;
                
        if (sept < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while (again);

    do {
        cout << "October: ";
        cin >> october;
        rainfall[9] = october;

        if (october < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);

    do {
        cout << "November: ";
        cin >> nov;
        rainfall[10] = nov;

        if (nov < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);

    do {
        cout << "December: ";
        cin >> december;
        rainfall[11] = december;

        if (december < 0) {
            again = true;
        }
        else {
            again = false;
        }
    } while(again);
    
    cout << "The total rainfall this year is " << getTotal(rainfall, 11) << " inches." << endl;
    cout << "The average rainfall this year is " << getAverage(rainfall, 11) << " inches." << endl;
    
    double largest = rainfall[0];
    for(int i = 0; i<12; i++) {
        if (rainfall[i] > largest) {
            largest = rainfall[i];
        }
    }

    cout << "The largest amount of rainfall this year was " << largest << " inches." << endl;

    double smallest = rainfall[0];
    for(int i = 0; i<12; i++) {
        if (rainfall[i] < smallest) {
            smallest = rainfall[i];
        }
    }

    cout << "The smallest amount of rainfall this year was " << smallest << " inches." << endl;
    return 0;
}


double getTotal(double array[], int) {
    double total = array[0] + array[1] + array[2] + array[3] + array[4]
                        + array[5] + array[6] + array[7] + array[8] + array[9]
                        + array[10] + array[11];
    
    return total;
}

double getAverage(double array[], int) {
    double total = array[0] + array[1] + array[2] + array[3] + array[4]
                        + array[5] + array[6] + array[7] + array[8] + array[9]
                        + array[10] + array[11];

    double average = total/12;
    return average;
}