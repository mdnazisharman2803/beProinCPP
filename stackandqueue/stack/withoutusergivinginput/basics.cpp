#include <iostream>
#include <exception>
using namespace std;

#define  n 100

class Stack{

public:
  int* arr;
  int top;
 

public:
  Stack() {

    arr = new int[n];
    this->top = -1;
  }

public:
  int size() {
   return top+1;
  }

public:
  void push(int data) {
   if(top==n-1){
       cout<<"stack overflow"<<endl;
       return;
   }

   top++;
   arr[top]=data;
  }

public:
  int Top()
  {
       if(top==-1){
       cout<<"stack empty underflow"<<endl;
       return -1;
   }
    return arr[top];
  }

public:
  int pop()
  {
   if(top==-1){
       cout<<"no element to pop"<<endl;
       return -1;
   }
   int m=arr[top];
    top--;
  return m;
  }
public:
bool empty(){
    return top==-1;
}

public:
  void display() {
   for(int i=top;i>=0;i--){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
  }

}st;

int main() {

st.push(1);
cout<<"element at top: "<<st.Top()<<endl;
cout<<"current size: "<<st.size()<<endl;
cout<<"value in stack: ";
st.display();
cout<<"1 for empty 0 for not empty: "<<st.empty()<<endl;
cout<<endl;

st.push(2);
cout<<"element at top: "<<st.Top()<<endl;
cout<<"current size: "<<st.size()<<endl;
cout<<"value in stack: ";
st.display();
cout<<"1 for empty 0 for not empty: "<<st.empty()<<endl;
cout<<endl;

st.push(3);
cout<<"element at top: "<<st.Top()<<endl;
cout<<"current size: "<<st.size()<<endl;
cout<<"value in stack: ";
st.display();
cout<<"1 for empty 0 for not empty: "<<st.empty()<<endl;
cout<<endl;

cout<<"element popped is "<<st.pop()<<endl;
cout<<"element at top: "<<st.Top()<<endl;
cout<<"current size: "<<st.size()<<endl;
cout<<"value in stack: ";
st.display();
cout<<"1 for empty 0 for not empty: "<<st.empty()<<endl;
cout<<endl;

cout<<"element popped is "<<st.pop()<<endl;
cout<<"element at top: "<<st.Top()<<endl;
cout<<"current size: "<<st.size()<<endl;
cout<<"value in stack: ";
st.display();
cout<<"1 for empty 0 for not empty: "<<st.empty()<<endl;
cout<<endl;

cout<<"element popped is "<<st.pop()<<endl;
cout<<"element at top: "<<st.Top()<<endl;
cout<<"current size: "<<st.size()<<endl;
cout<<"value in stack: ";
st.display();
cout<<"1 for empty 0 for not empty: "<<st.empty()<<endl;
  
}