#include <iostream>
using namespace std;

int main(){
int num,sum=0;
    cout<<"enter the number to sum the digits : ";
    cin>>num;

    while(num!=0){
        int last = num%10;
        num/=10;
        sum +=last;
        }
        cout<<"sum is : "<<sum<<endl;

        return 0;
        }
