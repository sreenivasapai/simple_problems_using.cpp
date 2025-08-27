#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "ENTER TWO NUMBERS TO CHECK WHICH ONE IS SMALLER : ";
    cin >> num1 >> num2;

    if(num1 < num2){
        cout << "THE SMALLEST NUMBER IS : " << num1 << endl;
    } else {
        cout << "THE SMALLEST NUMBER IS : " << num2 << endl;
    }

    return 0;
}
