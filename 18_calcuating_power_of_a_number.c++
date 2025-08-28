#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int base,exponent;
    double power;

    cout<<"ENTER THE VALUE FOR BASE : ";
    cin>>base;
    cout<<"ENTER THE VALUE FOR  EXPONENT : ";
    cin>>exponent;

    power=pow(base,exponent);

    cout<<"THE POWER OF THE NUMBER "<<base<<" is : "<<power<<endl;
    return 0;
    }

