#include <iostream>
using namespace std;

bool isprime(int num){
    if(num <=1) return false;
    for(int i =2;i*i<=num;i++){
        if(num%i ==0)return false;
        }
        return true;
    }
int main(){
    int n;
    cout<<"Enter the value for number";
    cin>>n;

    cout<<"prime numbers upto "<<n<<" are : "<<endl;
    for(int i=2;i<=n;i++){
        if (isprime(i)){
            cout<<i;}
        cout<<endl;}
        return 0;
        }
