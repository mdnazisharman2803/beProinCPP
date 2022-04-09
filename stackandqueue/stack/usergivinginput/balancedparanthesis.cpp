#include <bits/stdc++.h>
using namespace std;

bool isvalid(string str){
 
 stack<char> bp;
bool ans=true;
for(int i=0;i<str.length();i++){
       char ch= str[i];
       
       if(ch=='(' || ch=='{' || ch=='['){
        bp.push(ch);
       }
        else if(ch==')'){
            
        if(!bp.empty() && bp.top()=='('){
           bp.pop();
         }
         else{
               ans= false;
              return ans;
         }
        }
         else if(ch=='}'){
            
        if(!bp.empty() && bp.top()=='{'){
           bp.pop();
         }
         else{
               ans= false;
             return ans;
         }
        }
         else if(ch==']'){
            
        if(!bp.empty() && bp.top()=='['){
           bp.pop();
         }
         else{
             ans= false;
             return ans;
         }
        }
      }

   if(!bp.empty()){
    return false;
   }

   return true;   
}

int main()
{
   string str;
   cout<<"Type expression: ";
   getline(cin,str);
   
   if(isvalid(str)){
       cout<<"true";
   }
   else{
       cout<<"false";
   }

   

      
       
            


}