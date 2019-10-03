#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string startAnswer;
    int answer1, answer2, answer3, score;
    
    cout << "Are you ready for a quiz? [y/N] ";
    cin >> startAnswer;
    cout << "Ok, here it comes!" << endl;

    cout << "\nQ1) How does Sam get to school?" << endl;
    cout << setw(14) << "1) Train" << endl;
    cout << setw(12) << "2) Bus" << endl;
    cout << setw(12) << "3) Car" << endl;
    cout << "\n> ";
    cin >> answer1;
    if (answer1 == 1) {
        cout << "\n\nCorrect!\n\n" << endl;
        score++;
    }
    else {
        cout << "\n\nIncorrect!\n\n" << endl;
    }

    cout << "Q2) What is Sam's sport?" << endl;
    cout << setw(15) << "1) Soccer" << endl;
    cout << setw(17) << "2) Lacrosse" << endl;
    cout << setw(22) << "3) Cross Country" << endl;
    cout << "\n> ";
    cin >> answer2;
        if (answer2 == 3) {
        cout << "\n\nCorrect!\n\n" << endl;
        score++;
    }
    else {
        cout << "\n\nIncorrect!\n\n" << endl;
    }


    cout << "Q3) True/False: Sam plays the saxophone." << endl;
    cout << setw(13) << "1) True" << endl;
    cout << setw(14) << "2) False" << endl;
    cout << "\n> ";
    cin >> answer3;
    if (answer3 == 1) {
        cout << "\n\nCorrect!\n\n" << endl;
        score++;
    }
    else {
        cout << "\n\nIncorrect!\n\n" << endl;
    }

    cout << "\n You got " << score << " out of 3." << endl;
}
