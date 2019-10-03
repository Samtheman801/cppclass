#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
    const float FEDERAL_TAX_RATE = 0.20;
    const float STATE_TAX_RATE = 0.04;
    const float SOCIAL_SECURITY_TAX_RATE = 0.0350;
    const float MEDICARE_MEDICATE_TAX_RATE = 0.0275;
    const float PENSION_PLAN_RATE = 0.06;
    const float HEALTH_INSURANCE = 80.00;
    float federalTax; float stateTax; float socialSecurityTax;
    float medicareTax; float pensionPlan; float netPay;

    cout << "Enter Gross Amount:" << endl;
    float grossAmount;
    cin >> grossAmount;

    federalTax = (grossAmount*FEDERAL_TAX_RATE);
    stateTax = (grossAmount*STATE_TAX_RATE);
    socialSecurityTax = (grossAmount*SOCIAL_SECURITY_TAX_RATE);
    medicareTax = (grossAmount*MEDICARE_MEDICATE_TAX_RATE);
    pensionPlan = (grossAmount*PENSION_PLAN_RATE);
    netPay = (grossAmount-(federalTax+stateTax+socialSecurityTax+medicareTax+pensionPlan+HEALTH_INSURANCE));

    //format to two decimal places
    cout << setprecision(2) << fixed;

    cout << left << setw(26) << "Gross Amount: "
        << right << " $" 
    << setw(4) << grossAmount << endl;

    cout << left << setw(26) << "Federal Tax: "
        << right << " $" 
    << setw(4) << federalTax << endl;

    cout << left << setw(26) << "State Tax: "
        << right << " $" 
    << setw(4) << stateTax << endl;

    cout << left << setw(26) << "Social Security: "
        << right << " $" 
    << setw(4) << socialSecurityTax << endl;

    cout << left << setw(26) << "Medicare/Medicaid: "
        << right << " $" 
    << setw(4) << medicareTax << endl;

    cout << left << setw(26) << "Pension Plan: "
        << right << " $" 
    << setw(4) << pensionPlan << endl;

    cout << left << setw(26) << "Health Insurance: "
        << right << " $" 
    << setw(4) << HEALTH_INSURANCE << endl;

    cout << left << setw(26) << "Net Pay: "
        << right << " $" 
    << setw(4) << netPay << endl;

 return 0;
}