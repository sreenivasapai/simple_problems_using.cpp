#include <iostream>
#include <cmath>

bool isperfectsquare(int num){
     if (num<=0) return false;
     int root = sqrt(num);
     return root*root == num;
     }

     int main(){
     int number;
     std:: cout<< "Enter a number : ";
     std:: cin>> number;

     if (isperfectsquare(number)){
       std::cout<<number<<"is a perfect square ";
       }
     else{
        std::cout<<number<<"is not a perfect square";
        }
        return 0;

        }
