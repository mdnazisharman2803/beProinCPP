#include<iostream>
#include<stack>
#include<algorithm>
 using namespace std;

void reversesentence(string s){
  
  stack<string>st;
    for(int i=0;i<s.length();i++){
 
           string word="";

           while(s[i]!=' ' && i<s.length()){
              word+=s[i];
              i++;
           }
        st.push(word);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}

int main(){
   string s;
   cout<<"enter sentence u want to reverse: "<<endl;
   getline(cin,s);
reversesentence(s);


}