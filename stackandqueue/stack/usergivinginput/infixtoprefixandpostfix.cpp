#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;


int precedence(char optr){

    if(optr=='^'){
        return 3;
    }
    else if(optr=='+'){
         return 1;
    }
    else if(optr=='-'){
         return 1; 
    }
    else if(optr=='*'){
         return 2;
    }
    else if(optr=='/'){
         return 2;
    }
    else {
         return -1;
    }

}



int main() {
    cout<<"Type expression: ";
  string str;
  getline(cin, str);
  stack<string> post;
  stack<string>pre;
  stack<char> oprtr;
  
  for(int i=0;i<str.length();i++){
      char ch=str[i];
      if(ch=='('){
          oprtr.push(ch);
      }
      else if((ch>='0' && ch<='9') || (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
              string s= string(1,ch);
              post.push(s);
              pre.push(s);
      }
      else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'||ch=='^'){
         
          while(oprtr.size()>0 && oprtr.top() != '(' &&  precedence(ch)<= precedence(oprtr.top())){
             
           char  optr=oprtr.top();
           oprtr.pop();
            string s= string(1,optr);
            string postv2=post.top();
              post.pop();
            string postv1=post.top();
              post.pop(); 
              string postv=postv1 +postv2 + s;  
              post.push(postv);

            string prev2=pre.top();
              pre.pop();
            string prev1=pre.top();
              pre.pop(); 
              string prev=s+prev1 +prev2;  
              pre.push(prev);

      
      }
           oprtr.push(ch);
  }
      else if(ch==')'){
          while(oprtr.top() !='('){
          char  optr=oprtr.top();
           oprtr.pop();
            string s= string(1,optr);
            string postv2=post.top();
              post.pop();
            string postv1=post.top();
              post.pop(); 
              string postv=postv1 +postv2 + s;  
              post.push(postv);

            string prev2=pre.top();
              pre.pop();
            string prev1=pre.top();
              pre.pop(); 
              string prev=s+prev1 +prev2;  
              pre.push(prev);

      }  
     
      oprtr.pop();
      
    }
  }
   while(oprtr.size()!=0){
          char  optr=oprtr.top();
           oprtr.pop();
            string s= string(1,optr);
            string postv2=post.top();
              post.pop();
            string postv1=post.top();
              post.pop(); 
              string postv=postv1 +postv2 + s;  
              post.push(postv);

            string prev2=pre.top();
              pre.pop();
            string prev1=pre.top();
              pre.pop(); 
              string prev=s+prev1 +prev2;  
              pre.push(prev);
      }  
      
  string postans=post.top();
  post.pop();
  string preans=pre.top();
  pre.pop();
   cout<<postans<<endl;
   cout<<preans<<endl;
  return 0;
}
