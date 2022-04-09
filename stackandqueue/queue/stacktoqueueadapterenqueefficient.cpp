#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class StackToQueueAdapter {
public:
  stack <int> mainS;
  stack <int> helperS;

  int size() {
return mainS.size();
  }

  void enqueue(int val) {
    mainS.push(val);
  }

  int dequeue() {
 if(size()==0){
     cout<<"Queue underflow";
     return -1;
 }
 else{
    while(mainS.size()>1){
        int h=mainS.top();
        mainS.pop();
        helperS.push(h);
        }
int l=mainS.top();
mainS.pop();

    while(helperS.size()>0){
       int m=helperS.top();
       helperS.pop();
       mainS.push(m);
    }
    return l;
 }
  }
 

  

  int peek() {
  if(size()==0){
     cout<<"Queue underflow";
     return -1;
 }
 else{
    while(mainS.size()>1){
        int h=mainS.top();
        mainS.pop();
        helperS.push(h);
        }
int l=mainS.top();
mainS.pop();
helperS.push(l);
    while(helperS.size()>0){
       int m=helperS.top();
       helperS.pop();
       mainS.push(m);
    }
    return l;
 }
  }
  
};

int main() {
  string str;
  cin>>str;
  StackToQueueAdapter qu;
  while (str != "q"){
 
     if (str=="e") {
    
     int val;
      cin >> val;
      qu.enqueue(val);
    }
    else if (str=="s") {
      cout << qu.size() << endl;
    }
    else if (str=="d") {
      int val = qu.dequeue();
      if (val != -1) {
        cout << val << endl;
      }
    } else if (str=="p") {
      int val = qu.peek();
      if (val != -1) {
        cout << val << endl;
      }
    }
cin>>str;
  }
  return 0;
}