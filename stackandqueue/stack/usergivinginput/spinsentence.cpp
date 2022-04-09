#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

    void spinsesentencebyword(string &word){
     string strr=word;
    stack<char>st;
    for(int i=0;i<strr.length();i++){
 
           st.push(strr[i]);
    }
   
    while(!st.empty()){
         

      cout<<st.top();
        st.pop();
        
    }
    cout<<" ";
    return;
    }
   void bifurcate(string s){
  
    stack<string>stp;
    string newword;
    for(int i=0;i<s.length();i++){
           
           string word="";

           while(s[i]!=' ' && i<s.length()){
               
              word+=s[i];
              i++;
           }
      spinsesentencebyword(word);
    }

   }
int main(){
   string s;
   cout<<"enter sentence u want to reverse: "<<endl;
   getline(cin,s);
 bifurcate(s);


}