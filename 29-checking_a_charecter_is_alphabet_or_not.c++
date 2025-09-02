#include <iostream>
#include <cctype>

int main(){
   char ch;

   std::cout<<"Enter the charecter : ";
   std::cin>>ch;

   if(
      std::isalpha(ch)){
       std::cout<<ch<<"is an alphabet"<<std::endl;}
    else{
         std::cout<<ch<<"is not an alphabet"<<std::endl;
    }
    return 0;
}
