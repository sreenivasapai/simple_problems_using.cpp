#include <iostream>
using namespace std;

bool isprime(int n){
   if(n<=1)return false;
   for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
    }
    return true;
   }
int main(){
int num;
cout<<"enter a number : ";
cin>>num;

if(isprime(num))
    cout<<num<<" is a prime number ";
else
    cout<<num<<"is not a prime number";
    return 0;
    }
