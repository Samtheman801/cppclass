#include<iostream>
using namespace std;

int main() {
    int numPizzasAte; int numFriesAte; int numCandyAte;
    int pizzaCal = 290;
    int friesCal = 198;
    int candyCal = 400;
    
    cout << "Did you eat any pizza? [y/n] ";
    char answer;
    cin >> answer;
    if (answer == 'y') {
        cout << "How many pizzas did you eat? ";
        cin >> numPizzasAte;
    }
    else {
        numPizzasAte = 0;
    }

    cout << "Did you eat any fries? [y/n] ";
    cin >> answer;
    if (answer == 'y') {
        cout << "How many orders of fries did you eat? ";
        cin >> numFriesAte;
    }
    else {
        numFriesAte = 0;
    }

    cout << "Did you eat any candy? [y/n] ";
    cin >> answer;
    if (answer == 'y') {
        cout << "How many candies did you eat? ";
        cin >> numCandyAte;
    }
    else {
        numCandyAte = 0;
    }

    int totalCalories;
    totalCalories = ((numPizzasAte*pizzaCal)+(numFriesAte*friesCal)+(numCandyAte*candyCal));
    cout << "You ate " << totalCalories << " calories today." << endl;

    double milesToBurn;
    milesToBurn = (totalCalories/100);
    cout << "You would have to run " << milesToBurn << " miles to burn that off." << endl;
}