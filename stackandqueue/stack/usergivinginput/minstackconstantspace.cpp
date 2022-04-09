#include<iostream>
#include <string>
#include <stack>

using namespace std;


class MinStack {
  stack<int> cs;
  int minVal;


public:
  int size() {
    cs.size();
  }

public:
  void push(int val) {
   if(cs.size()==0){
       cs.push(val);
       minVal=val;
   }
   else if(val>=minVal){
       cs.push(val);
   }
   else{
     cs.push(val+val-minVal);
       minVal=val;
   }
  }

public:
  int pop() {
     if(size()==0){
        cout<<"underflow";
        return -1;
    }
    else{
       
      if(cs.top()>=minVal){
          int m=cs.top();
          cs.pop();
          return m;
      }
      else{
          int ov=minVal;
          minVal=2*minVal-cs.top();
          cs.pop();
        return ov;  
      }
    }
  }

public:
  int top() {
   
    if(size()==0){
        cout<<"underflow";
        return -1;
    }
    else{
      if(cs.top()>=minVal){
          return cs.top();
      }
      else{
        return minVal;  
      }
    }
  }

public:
  int min() {
    if(size()==0){
        cout<<"underflow";
        return -1;
    }
    else{
       return minVal;
    }
  }

};


int main() {


  MinStack st;

  string str;
  cin >> str;

  while (str != "quit") {

    if (str == "push") {
      int val;
      cin >> val;
      st.push(val);
    }
    else if (str == "pop") {
      int val = st.pop();
      if (val != -1) {
        cout << val << endl;
      }
    }
    else if (str == "top") {
      int val = st.top();
      if (val != -1) {
        cout << val << endl;
      }
    }
    else if (str == "size") {
      cout << st.size() << endl;
    }
    else if (str == "min" ) {
      int val = st.min();
      if (val != -1) {
        cout << val << endl;
      }
    }

    cin >> str;

  }

}