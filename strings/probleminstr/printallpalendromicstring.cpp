#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s){
       int l=0;
       int h=s.length()-1;
       while(l<h){
              if (s[l]!=s[h]){
                  return false;
              }
              else{
                  l++;
                  h--;
              }
       }
       return true;
}

int main(){
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        for(int j=1;i+j<=str.length();j++){

            string s=str.substr(i,j);
            if (ispalindrome(s)){
                cout<<s<<endl;
            }
           
        }
    }
}
