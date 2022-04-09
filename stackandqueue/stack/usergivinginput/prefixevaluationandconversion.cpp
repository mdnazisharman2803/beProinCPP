#include <bits/stdc++.h>
using namespace std;


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
  string str;
  cout<<"Type expression: ";
  cin >> str;


stack<int> evaluated;
stack<string> infix;
stack<string> postfix;
 
for(int i=str.length()-1;i>=0;i--){
  char ch=str[i];

  if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){

     string s= string(1,ch);

    //evaluated
   char optr=ch;
    int v1=evaluated.top();
           evaluated.pop();
    int v2=evaluated.top();
           evaluated.pop(); 
    int val=operation(v1,v2,optr);  
           evaluated.push(val);

    // infix
    string infixv1=infix.top();
           infix.pop();      
    string infixv2=infix.top();
           infix.pop(); 
    string infixv= "("+ infixv1+ s + infixv2 + ")";  
           infix.push(infixv);

    //postfix
    string postv1=postfix.top();
           postfix.pop();
    string postv2=postfix.top();
           postfix.pop(); 
    string postv=postv1 +postv2 + s;  
           postfix.push(postv);

}
else{

    evaluated.push(ch-'0');
    string s= string(1,ch);
    infix.push(s);
    postfix.push(s);
}

}

int evaluatedans=evaluated.top();
evaluated.pop();
string infixans=infix.top();
infix.pop();
string postfixans=postfix.top();
postfix.pop();

cout<<evaluatedans<<endl;
cout<< infixans<<endl;
cout<<postfixans<<endl;

  return 0;
}