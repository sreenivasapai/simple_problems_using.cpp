#include <iostream>
#include <string>
using namespace std;

int main(){
   string s;
   cout << "Enter the string:";
   getline(cin, s);   // allows spaces too

   for(int i=s.length()-1;i>=0;i--){
      cout << s[i];
        }
        cout << endl;

return 0;
}