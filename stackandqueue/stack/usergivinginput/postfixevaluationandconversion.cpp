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
stack<string> prefix;
 
for(int i=0;i< str.length();i++){
  char ch=str[i];

  if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){

     string s= string(1,ch);

    //evaluated
   char optr=ch;
    int v2=evaluated.top();
           evaluated.pop();
    int v1=evaluated.top();
           evaluated.pop(); 
    int val=operation(v1,v2,optr);  
           evaluated.push(val);

    // infix
    string infixv2=infix.top();
           infix.pop();      
    string infixv1=infix.top();
           infix.pop(); 
    string infixv= "("+ infixv1+ s + infixv2 + ")";  
           infix.push(infixv);

    //prefix
    string prefixv2=prefix.top();
           prefix.pop();
    string prefixv1=prefix.top();
           prefix.pop(); 
    string prefixv=s+prefixv1 +prefixv2;  
           prefix.push(prefixv);

}
else{

    evaluated.push(ch-'0');
    string s= string(1,ch);
    infix.push(s);
    prefix.push(s);
}

}

int evaluatedans=evaluated.top();
evaluated.pop();
string infixans=infix.top();
infix.pop();
string prefixans=prefix.top();
prefix.pop();

cout<<evaluatedans<<endl;
cout<<infixans<<endl;
cout<<prefixans<<endl;

  return 0;
}