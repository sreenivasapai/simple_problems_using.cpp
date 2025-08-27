#include <iostream>
using namespace std;

int main(){

     int a= 5;
     int b= 10;
     int temp;

     cout<<"BEFORE SWAPPING : a ="<< a <<",  b = "<< b << endl;
     temp=a;
     a=b;
     b=temp;
     cout<<"AFTER SWAPPING : a =" << a <<", b =" << b <<endl;

     return 0;

     }
