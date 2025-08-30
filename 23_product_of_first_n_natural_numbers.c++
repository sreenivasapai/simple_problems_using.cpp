#include <iostream>
using namespace std;

int main(){
    int n;
    long long  product =  1;

    cout<<"ENTER A POSITIVE INTEGER : " ;
    cin>> n;

    if(n<=0){
    cout<<"ENTER A  POSITIVE NUMBER GREATER THAN 0"<<endl;
    return 1;}

    for(int i =1; i<=n; i++){
    product*=i;
    }
    cout<<"The product of the number is : " <<product<<endl;
    return 0;
}
