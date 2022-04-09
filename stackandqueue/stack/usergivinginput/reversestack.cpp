#include<iostream>
#include<stack>
using namespace std;
 void insertatbottom(stack<int> &st,int ele){
      if(st.empty()){
          st.push(ele);
        return;
    }

     int topel=st.top();
     st.pop();
     insertatbottom(st,ele);
     st.push(topel);
    

 }

void reversestack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int ele=st.top();
    st.pop();
    reversestack(st);
    insertatbottom(st, ele);
}

int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

stack<int> st;

for(int i=0;i<n;i++){
 
    st.push(arr[i]);

}


reversestack(st);

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

}