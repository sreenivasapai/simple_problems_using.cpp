#include <iostream>
using namespace std;

int main(){

double unit,billamount=0;

cout<<"Enter the units that have been used";
cin>>unit;

if(unit<=100){
   billamount=unit*1.5;}
else if(unit<=200){
    billamount=unit=(100*1.5)+((unit-100)*2.5);}
else if(unit<=300){
    billamount=(100*1.5)+(100*2.5)+((unit-200)*3.5);}
else{
     billamount=(100*1.5)+(100*2.5)+(100*3.5)+((unit-300)*4.5);
     }

    cout<<"- THE AMOUNT FOR UNIT : "<<unit<<" - is : "<<billamount<<endl;

    return 0;

}
