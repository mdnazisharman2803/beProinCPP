#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Type expression: ";
  bool ans=false;
    cin>>s;
    stack<char> st;

    for(int i=0;i<s.length();i++){
        char ch=s[i];
         if(ch==')'){
            if(st.top()=='('){
               ans=true;
              
         
            }
            else{
            while(st.top()!='('){
                st.pop();
            }
            st.pop();
            }
        }else{
             st.push(ch);
        }
    }
    
    cout<<ans;
    
}