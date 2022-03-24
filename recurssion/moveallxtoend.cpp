#include<iostream>
#include<algorithm>
using namespace std;

string moveallx(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveallx(s.substr(1));

    if(ch=='x'){
        return ans + ch;
    }
    return ch+ans;
}

int main(){
    cout<<moveallx("axxbdxcefxihx");
}