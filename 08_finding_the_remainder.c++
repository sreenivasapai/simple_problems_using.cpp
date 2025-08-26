#include <iostream>
using namespace std;

int main(){
   int devident,divisor,remainder;

   cout<<"Enter the devident : ";
   cin>>devident;
   cout<<"Enter the divisor : ";
   cin>>divisor;
//CALCULATE remainder
remainder = devident % divisor;
//OUTPUT THE RESULT
 cout<<"THE REMAINDER IS : "<<remainder<<endl;
 return 0;

   }
