#include<iostream>
#include<math.h>
using namespace std;

int main() {
    cout << "Annual Interest Rate(%): ";
    double enteredAnnualInterestRate;
    cin >> enteredAnnualInterestRate;

    cout << "Number of Years: ";
    int enteredNumberYears;
    cin >> enteredNumberYears;

    cout << "Loan Amount($): ";
    int enteredLoanAmount;
    cin >> enteredLoanAmount;

    double monthlyInterestRate;
    monthlyInterestRate = (enteredAnnualInterestRate/1200);

    double calculatedMonthlyPayment;
    calculatedMonthlyPayment = ((enteredLoanAmount*monthlyInterestRate)/(1)) / (1-(1/(pow(1+monthlyInterestRate, (enteredNumberYears*12)))));

    cout << "Your Monthly Payment is $" << round(calculatedMonthlyPayment*100)/100 << endl;
}