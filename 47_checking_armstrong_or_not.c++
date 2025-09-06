#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num){
    int originalnumber=num,sum=0 , digits =0;
    while(originalnumber != 0){
        digits++;
        originalnumber/=10;
        }
        originalnumber =num;
        //calculating sum of power of digits

        while(originalnumber!=0){
            int digit = originalnumber%10;
            sum +=pow(digit,digits);
            originalnumber /=10;
            }
            return sum == num;
            }
int main(){
    int num;
    cout<<"enter the number to find : ";
    cin>>num;

    if(isArmstrong(num)){
        cout<<num<<" is a armstrong number ";}
    else{
        cout<<num<<"is not a armstrong number ";
        }
    return 0;
     }
