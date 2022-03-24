#include<iostream>
#include<algorithm>
using namespace std;

void substri(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
     
      

    char ch=s[0];
    int code = ch;
    string ros=s.substr(1);

    substri(ros,ans);
    substri(ros,ans+ch);
    substri(ros,ans+ to_string(code));
}

int main(){
    substri("AB","");
    cout<<endl;
    
}