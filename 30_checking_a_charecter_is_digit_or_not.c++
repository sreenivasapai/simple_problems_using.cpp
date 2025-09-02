#include <iostream>
#include <cctype>

int main(){
   char ch;

   std::cout<<"Enter the Digit : ";
   std::cin>>ch;

   if(
      std::isdigit(ch)){
       std::cout<<ch<<"is a Digit"<<std::endl;}
    else{
         std::cout<<ch<<"is not a Digit"<<std::endl;
    }
    return 0;
}
