#include<iostream>
using namespace std;
string String_compression01(string str)
{  
    string s= str.substr(0,1); //getting first char of string and converting to string using empty string
    for(int i=1;i<str.length();i++){
        char curr=str[i];
        char prev=str[i-1];

        if(curr!=prev){
            s+=curr;
        }
    }
  return s;
}
string String_compression02(string str)
{string s= str.substr(0,1); //getting first char of string and converting to string using empty string
    int count =1;
    for(int i=1;i<str.length();i++){
        char curr=str[i];
        char prev=str[i-1];

        if(curr==prev){
          count++;
        }
        else{
            if (count>1){

            s+=to_string(count);
            count=1;
            }
            s+=curr;
        }
    }
    if(count>1){
        s+=to_string(count);
        count=1;
    }
  return s;

}
int main(){
    string str;
    getline(cin,str);
     cout<<String_compression01(str)<<endl;
     cout<<String_compression02(str)<<endl;
    
}