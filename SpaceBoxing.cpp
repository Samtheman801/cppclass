#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const float VENUS_GRAVITY = 0.78;
    const float MARS_GRAVITY = 0.39;
    const float JUPITER_GRAVITY = 2.65;
    const float SATURN_GRAVITY = 1.17;
    const float URANUS_GRAVITY = 1.05;
    const float NEPTUNE_GRAVITY = 1.23;
    float earthWeight;
    int chosenPlanet;

    cout << "Please enter your current earth weight: ";
    cin >> earthWeight;

    cout << "I have information for the following planets: " << endl;
    cout << "1. Venus   2. Mars   3. Jupiter\n4. Saturn   5. Uranus   6. Neptune" << endl;
    cout << "Which planet are you visiting? ";
    cin >> chosenPlanet;

    cout << setprecision(2) << fixed;

    if (chosenPlanet == 1) {
        cout << "Your weight would be " << (earthWeight*VENUS_GRAVITY) << " pounds on Venus." << endl;
    }
    else if (chosenPlanet == 2) {
        cout << "Your weight would be " << (earthWeight*MARS_GRAVITY) << " pounds on Mars." << endl;
    }
    else if (chosenPlanet == 3) {
        cout << "Your weight would be " << (earthWeight*JUPITER_GRAVITY) << " pounds on Jupiter." << endl;
    }
    else if (chosenPlanet == 4) {
        cout << "Your weight would be " << (earthWeight*SATURN_GRAVITY) << " pounds on Saturn." << endl;
    }
    else if (chosenPlanet == 5) {
        cout << "Your weight would be " << (earthWeight*URANUS_GRAVITY) << " pounds on Uranus." << endl;
    }
    else if (chosenPlanet == 6) {
        cout << "Your weight would be " << (earthWeight*NEPTUNE_GRAVITY) << " pounds on Neptune." << endl;
    }
    else {
        cout << "Invalid input." << endl;
    }
}