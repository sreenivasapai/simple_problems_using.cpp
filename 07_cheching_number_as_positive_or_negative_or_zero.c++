#include <iostream>
using namespace std;

int main(){
    int number;

    cout<<"ENTER A NUMBER :";
    cin>>number;

    if(number>0){
      cout<<"number is positive."<<endl;
    }else if(number<0){
      cout<<"number is negative."<<endl;
    }else{
      cout<<"the number is zero."<<endl;
      }
      return 0;
    }
