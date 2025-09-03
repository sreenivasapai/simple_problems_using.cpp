#include <iostream>
using namespace std;

bool ispalindrome(int num){
       int original = num;
       int reversed = 0;

       while (num>0){
        int digit = num%10;
        reversed = reversed*10+digit;
        num/=10;
        }
        return original == reversed;
        }

        int main(){
        int number;

        cout<<"enter a number : ";
        cin>> number;

        if(ispalindrome(number)){
          cout<<number<<" is palindrome"<< endl;}
        else{
        cout<<number<<"is not a palindrome number "<<endl;}

        return 0;

        }
