 #include <iostream>
 using namespace std;

 int main(){
     char ch;
     cout<<"enter a charecter";
     cin>>ch;

     if(isalpha(ch)){
        char lowerch = tolower(ch);
        if(lowerch == 'a' ||lowerch == 'e' ||lowerch == 'i' ||lowerch == 'o' ||lowerch == 'u'){
          cout<<ch<<"the charecter is a vowel "<<endl;}
        else{
           cout<<ch<<"charecter is a consonant"<<endl;}
          }
     else{
          cout<<"charecheter is not an alphabet"<<endl;}
       return 0;
     }

