#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    double power = 1;  // Initialize power to 1

    cout << "ENTER THE VALUE FOR BASE : ";
    cin >> base;
    cout << "ENTER THE VALUE FOR EXPONENT : ";
    cin >> exponent;

    for (int i = 0; i < exponent; i++) {
        power *= base;
    }

    cout << "THE POWER OF THE NUMBER " << base << " is : " << power << endl;
    return 0;
}
