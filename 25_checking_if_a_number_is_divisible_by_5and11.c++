#include <iostream>
using namespace std;

int main(){
  int number;

  cout<<"enter a number : ";
  cin>>number;

  if(number%5 == 0 && number%11 ==0){
      cout<<" The number is divisible by both 5 and 11"<<endl;}
  else{
    cout<<"the number is not divisible by 5 and 11"<<endl;
    }
    return 0;
}
