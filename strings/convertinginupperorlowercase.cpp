#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="ndccnjciewbibijib";
    cout<<'b'-'B'<<endl; // pick up any character from string and subtract with its capital. which gives us how much that character is ahead or behind to it. so here we got b is 32 unit ahead of B so we have to subtract 32 in order to captalise
    
   // converting into upper case

   for(int i=0;i<str.size();i++){
       if(str[i]>='a'&&str[i]<='z'){
           str[i]-=32;
       }
   }
   cout<<str<<endl;

   //converting to lowercase
   cout<<'B'-'b'<<endl;
    for(int i=0;i<str.size();i++){
       if(str[i]>='A'&&str[i]<='Z'){
           str[i]+=32;
       }
   }
   cout<<str<<endl;


   string  s1="scdhcihhjiji";

   //converting to uppercase using inbuilt function

   transform(s1.begin(),s1.end(), s1.begin()+3,::toupper);
    cout<<s1<<endl;
   transform(s1.begin(),s1.end(), s1.begin(),::toupper);
   cout<<s1<<endl;
  
  //converting to lowercase using inbuilt  function

   transform(s1.begin(),s1.end(), s1.begin()+3,::tolower);
   cout<<s1<<endl;
   transform(s1.begin(),s1.end(), s1.begin(),::tolower);
   cout<<s1<<endl;

}