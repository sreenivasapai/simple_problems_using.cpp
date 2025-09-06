#include <iostream>
using namespace std;

    int fibonocci(int n){
        if(n<=1)
            return n;
            return fibonocci(n-1)+fibonocci(n-2);
            }
  int main(){
    int n;
    cout<<"enter the number of terms : ";
    cin>>n;

    cout<<"fibonocci series :";
     for(int i=1;i<=n;i++){
     cout<<fibonocci(i)<<endl;
     }
     cout<<endl;
    return 0;
}
