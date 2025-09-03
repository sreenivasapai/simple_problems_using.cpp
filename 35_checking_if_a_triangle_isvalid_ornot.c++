#include <iostream>
using namespace std;

bool isValidtriangle(int a, int b, int c){
   return(a+b>c)&&(b+c>a)&&(a+c>b);
   }

int main(){
  int a,b,c;
   cout<<"ENTER THE SIDES OF TRIANGLE :";
   cin>>a>>b>>c;
  if(isValidtriangle(a,b,c)){
      cout<<"the triangle is valid"<<endl;
      }
  else{
      cout<<"the traingle is not valid"<<endl;
      }
      return 0;}
