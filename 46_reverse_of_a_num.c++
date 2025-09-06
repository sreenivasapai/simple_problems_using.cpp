#include <iostream>
using namespace std;

int main(){
    int num,reversednum=0;

    cout<<"enter the number :";
    cin>>num;

    for(; num!=0;num/=10){
        reversednum =reversednum*10 + (num%10);
        }
        cout<<"Reversed number :"<<reversednum;
        return 0;
        }
