#include<iostream>
#include<algorithm>
using namespace std;

void substri(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
     
      //its subsequences not substring
      

    char ch=s[0];
    string ros=s.substr(1);
      substri(ros,ans+ch);
   
    substri(ros,""+ans);
   

}

int main(){
    substri("ABC","");
    
}