#include <iostream>
using namespace std;

int main(){
  int number;

  cout<<"ENTER THE NUMBER TO CHECK IF THE NUMBER IS ODD OR EVEN : ";
  cin>>number;
  if(number%2==0){
    cout<<number<<" : THIS NUMBER IS EVEN"<<endl;
 }else{
    cout<<number<<" : THIS NUMBER IS ODD"<<endl;
    }
    return 0;
  }
