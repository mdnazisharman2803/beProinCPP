#include<iostream>
#include<stack>
#include<algorithm>
 using namespace std;

 string reverseword(string &word){
  string strr=word;
  stack<char>st;
    for(int i=0;i<strr.length();i++){
 
           st.push(strr[i]);
    }
   string bts="";
    while(!st.empty()){
         

      bts+=  st.top();
        st.pop();
        
    }
    
    return bts;
}

void reversesentence(string s){
  
  stack<string>stp;
   string newword;
    for(int i=0;i<s.length();i++){
           
           string word="";

           while(s[i]!=' ' && i<s.length()){
               
              word+=s[i];
              i++;
           }
       newword =reverseword(word);
        stp.push(newword);
    }
    
    while(!stp.empty()){
        cout<<stp.top()<<" ";
        stp.pop();
    }

}

int main(){
   string s;
   cout<<"enter sentence u want to reverse: "<<endl;
   getline(cin,s);
 reversesentence(s);


}