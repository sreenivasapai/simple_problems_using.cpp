#include <iostream>
using namespace std;

int main() {
    char num;
    cout << "Enter a number (as a character): ";
    cin >> num;
    cout << "The ASCII value of " << num << " is: " << int(num) << endl;
    return 0;
}
