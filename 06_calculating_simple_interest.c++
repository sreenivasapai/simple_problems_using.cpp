#include <iostream>
using namespace std;

int main(){
    float principal,rate,time,simpleinterest;

    cout<<"ENTER PRICIPAL AMOUNT : ";
    cin>>principal;
    cout<<"enter rate of interest (in %) : ";
    cin>> rate;
    cout<<"Enter Time (In yrs) : ";
    cin>> time;

    //caculate simpleinterst
    simpleinterest = (principal*rate*time)/100;
    //output the result
    cout<<"your simple interest is : "<<simpleinterest<<endl;
    return 0;
    }
