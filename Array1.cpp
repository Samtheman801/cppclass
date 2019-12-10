#include <iostream>
#include <fstream>
#include <string>
#include <random>
using namespace std;

string firstName, lastName, fileName;
int grade1, grade2, grade3, grade4, grade5;
int grades[4];

int main() {

    cout << "Name (first last): ";
    cin >> firstName >> lastName;

    cout << "Filename: ";
    cin >> fileName;

    grades[0] = rand() % 100 + 1;
    grades[1] = rand() % 100 + 1;  
    grades[2] = rand() % 100 + 1;
    grades[3] = rand() % 100 + 1;
    grades[4] = rand() % 100 + 1;

    cout << "\nHere are your randomly selected grades:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Grade " << i+1 << ": " << grades[i] << endl;
    }

    //save data in file
    string filepath = "/home/samuel/Cpp/txtfiles/" + fileName;
    ofstream outputFile(filepath);

    outputFile << firstName << " " << lastName << endl;
    for(int j = 0; j < 5; j++) {
        outputFile << grades[j] << " ";
    }

    cout << "\nData saved in \"" << fileName << "\"." << endl;
    return 0;
}