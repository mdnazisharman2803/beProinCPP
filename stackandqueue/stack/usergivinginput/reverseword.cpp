#include<iostream>
#include<stack>
#include<algorithm>
 using namespace std;

void reverseword(string s){
  
  stack<char>st;
    for(int i=0;i<s.length();i++){
 
           st.push(s[i]);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}

int main(){
   string s;
   cout<<"enter word u want to reverse: "<<endl;
   cin>>s;
reverseword(s);


}

/*
other way

#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
 using namespace std;

void reverseword(char arr[],int l){

    stack<char> st;

    for(int i=0;i<l;i++){
         
         st.push(arr[i]);

    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}

int main(){
    int l;
    cin>>l;
   char arr[l];
   cout<<"enter word u want to reverse: "<<endl;
   cin>>arr;
    reverseword(arr,l);




}
*/