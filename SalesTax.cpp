#include<iostream>
#include<math.h>
using namespace std;

int main() {
    double NJSalesTax;
    NJSalesTax = 7.000;
    cout << "You are located in NJ. The sales tax is " << round(NJSalesTax*100)/100 << "%" << endl;
}