#include <iostream>
using namespace std;

int main(){
  int number;

  cout<<"Enter a number to print the multiplacation table"<<endl;
  cin>>number;

  cout<<"Multiplication Table Of :"<<number<<endl;
  for(int i=1;i<=10;++i){
      cout<<number<<"X"<<i<<"="<<number*i<<endl;
      }
      return 0;
    }
