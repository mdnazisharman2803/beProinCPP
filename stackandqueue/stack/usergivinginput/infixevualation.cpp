#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;


int precedence(char optr){
    if(optr=='+'){
         return 1;
    }
    else if(optr=='-'){
         return 1; 
    }
    else if(optr=='*'){
         return 2;
    }
    else {
         return 2;
    }

}

int operation(int v1,int v2,char optr){
      if(optr=='+'){
         return v1+v2;
    }
    else if(optr=='-'){
         return v1-v2; 
    }
    else if(optr=='*'){
         return v1*v2;
    }
    else{
         return v1/v2;
    }
}

int main() {
    cout<<"Type expression: ";
  string str;
  getline(cin, str);
  stack<int> oprnd;
  stack<char> oprtr;
  
  for(int i=0;i<str.length();i++){
      char ch=str[i];

      if(isdigit(ch)){
          oprnd.push(ch-'0');
      }
      else if(ch=='('){
          oprtr.push(ch);
      }
      else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
          //ch is wanting higher priority  operator to solve
          while(oprtr.size()>0 && oprtr.top() != '(' &&  precedence(ch)<= precedence(oprtr.top())){
              char  optr=oprtr.top();
           oprtr.pop();
            int v2=oprnd.top();
              oprnd.pop();
              int v1=oprnd.top();
              oprnd.pop(); 
              int ans= operation(v1,v2,optr);  
              oprnd.push(ans);
          }
          // ch is pushing itself
           oprtr.push(ch);
      }
      else if(ch==')'){
          while(oprtr.top() !='('){
           char  optr=oprtr.top();
           oprtr.pop();
            int v2=oprnd.top();
              oprnd.pop();
              int v1=oprnd.top();
              oprnd.pop(); 
              int ans= operation(v1,v2,optr);  
              oprnd.push(ans);
      }  
     
      oprtr.pop();
      
    }
  }
   while(oprtr.size()!=0){
      char  optr=oprtr.top();
           oprtr.pop();
            int v2=oprnd.top();
              oprnd.pop();
              int v1=oprnd.top();
              oprnd.pop(); 
              int ans= operation(v1,v2,optr);  
              oprnd.push(ans);
      }  
      
   int ans= oprnd.top();
   oprnd.pop();
   cout<<ans<<endl;
  return 0;
}
