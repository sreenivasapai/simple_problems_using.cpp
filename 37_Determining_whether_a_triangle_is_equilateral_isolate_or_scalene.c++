#include <iostream>
using namespace std;

int main() {
    // Input the three sides of the triangle
    double side1, side2, side3;
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Check if the sides form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Determine the type of triangle
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    } else {
        cout << "The given sides do not form a valid triangle." << endl;
    }

    return 0;
}
