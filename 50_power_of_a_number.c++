#include <iostream>
using namespace std;

int power(int base, int exponent){
    if(exponent == 0)
        return 1;
        return (base*exponent -1);
        }
    int main(){
        int base,exponent;

        cout<<"enter base";
        cin>>base;
        cout<<"enter exponent";
        cin>>exponent;

        cout<<base << "raised o the power"<<exponent<<"is :"<<power(base,exponent)<<endl;
        return 0;
        }
