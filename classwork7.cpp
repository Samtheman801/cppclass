#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int userChoice;
bool again = true;

static double area_circle( int radius );
static int area_rectangle( int length, int width );
static int area_square( int side );
static double area_triangle( int base, int height );

int main() {
    
    while(again) {
        cout << "1. Circle\n2. Rectangle\n3. Square\n4. Triangle\n5. Quit" << endl;
        cout << ">";
        cin >> userChoice;

        if (userChoice == 1) {
            cout << "Radius: ";
            int radius;
            cin >> radius;
            cout << "The area is " << area_circle(radius) << "." << endl;
        }
        else if (userChoice == 2) {
            cout << "Length: ";
            int length;
            cin >> length;
            cout << "Width: ";
            int width;
            cin >> width;
            cout << "The area is " << area_rectangle(length, width) << "." << endl;
        }
        else if (userChoice == 3) {
            cout << "Side Length: ";
            int sideLength;
            cin >> sideLength;
            cout << "The area is " << area_square(sideLength) << "." << endl;
        }
        else if (userChoice == 4) {
            cout << "Base: ";
            int base;
            cin >> base;
            cout << "Height: ";
            int height;
            cin >> height;
            cout <<"The area is " << area_triangle(base, height) << "." << endl;
        }
        else if (userChoice == 5) {
            again = false;
        }
    }
    return 0;
}

static double area_circle( int radius ) {
    return (M_PI*(radius*radius));
}

static int area_rectangle( int length, int width ) {
    return (length*width);
}

static int area_square( int side ) {
    return (side*side);
}

static double area_triangle( int base, int height ) {
    return (0.5 * (base*height));
}
