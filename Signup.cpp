#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    int loginChoice, planChoice;
    string firstName, lastName;
    ofstream file;

    cout << "Welcome to Sam's Gym. Please enter the following information to sign up." << endl;
    file.open("userlogins.txt", ios::app);
    
    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;

    cout << "\nWhich plan would you like to choose?" << endl;
    cout << setw(30) << "1) 12 Months ($50/month)" << endl;
    cout << setw(30) << "2) 24 Months ($45/month)" << endl;
    cout << setw(30) << "3) 36 Months ($40/month)" << endl;

    cout << "\n> ";
    cin >> planChoice;

    if (planChoice == 1) {
        cout << "\nYou'll pay $50 dollars per month and $600 total.\n" << endl;
        file << firstName << " " << lastName << " --- " << "12 Months" << " --- " << "Monthly Price: $50" << " --- " << "Total: $600" << endl;
    }
    else if (planChoice == 2) {
        cout << "\nYou'll pay $45 dollars per month and $1080 total.\n" << endl;
        file << firstName << " " << lastName << " --- " << "24 Months" << " --- " << "Monthly Price: $45" << " --- " << "Total: $1080" << endl;
    }
    else if (planChoice == 3) {
        cout << "\nYou'll pay $40 dollars per month and $1440 total.\n" << endl;
        file << firstName << " " << lastName << " --- " << "36 Months" << " --- " << "Monthly Price: $40" << " --- " << "Total: $1440" << endl;
    }

    file.close();
    return 0;
}