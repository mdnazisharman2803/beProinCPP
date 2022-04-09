#include <iostream>
#include <exception>
#include <queue>
using namespace std;

class QueueToStackAdapter {
public:
  queue<int> mainQ;
  queue<int> helperQ;

  int size() {
   return mainQ.size();
  }

  void push(int data) {
  mainQ.push(data);
  }

  int top() {
   if(size()==0){
       cout<<"stack underflow";
       return -1;
   }
   else{
       while(size()>1){
           helperQ.push(mainQ.front());
           mainQ.pop();
       }
       int h=mainQ.front();
       mainQ.pop();
       helperQ.push(h);
       

       while(helperQ.size()>0){
           int m=helperQ.front();
           helperQ.pop();
           mainQ.push(m);
       }
       return h;
   }

  }

  int pop() {
     if(size()==0){
       cout<<"stack underflow";
       return -1;
   }
   else{
       while(size()>1){
           helperQ.push(mainQ.front());
           mainQ.pop();
       }
       int h=mainQ.front();
       mainQ.pop();
      
       

       while(helperQ.size()>0){
           int m=helperQ.front();
           helperQ.pop();
           mainQ.push(m);
       }
       return h;
   }
  }
};

int main() {
  QueueToStackAdapter st;
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
    cin >> str;
  }
  return 0;
}