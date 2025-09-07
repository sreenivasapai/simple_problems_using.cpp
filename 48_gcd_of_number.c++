#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }

    // Return gcd of a and b
    return result;
}
    int main(){
        int num1 , num2;
        cout<<"Enter two numbers :";
        cin>>num1>>num2;
        cout << "GCD is: " << gcd(num1, num2) << endl;
    return 0;
        }
