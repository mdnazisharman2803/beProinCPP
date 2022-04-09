#include <iostream>
#include <exception>
using namespace std;

class Stack {

public:
  int* arr;
  int top;
  int MaxCapacity;

public:
  Stack(int size) {
    this->MaxCapacity = size;
    this->arr = new int[this->MaxCapacity];
    this->top = -1;
  }

public:
  Stack() {
    Stack(10);
  }

public:
  int size() {
      return top+1;
  }

public:
  void push(int data) {
     if(top==MaxCapacity-1){
     int* narr=new int[2*MaxCapacity];
     for(int i=0;i<MaxCapacity;i++){
        narr[i]=arr[i]; 
     }
    arr=narr;
     top++;
   arr[top]=data;
     }
     else{
   top++;
   arr[top]=data;
   }
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
  void display() {
    for(int i=top;i>=0;i--){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
  }
  public:
  bool empty(){
    return top==-1;
}
};

int main() {
    
  int n;
  cout<<"enter size of stack in the form of array: "<<endl;
  cin >> n;
  Stack st(n);
  cout<<"choose option 'quit','push' 'pop', 'top','size','display','empty' "<<endl;
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
     else if (str == "Top") {
      int val = st.Top();
      if (val != -1) {
        cout << val << endl;
      }

    }
     else if (str == "size") {
      cout << st.size() << endl;
    } 
    else if (str == "display") {
      st.display();
    }
     else if (str == "empty") {
     cout<<st.empty()<<endl;
    }
    cout<<"what do u want to do please choose next "<<endl;
     cout<<"choose option 'quit', 'push',pop', 'Top','size','display','empty' "<<endl;
    cin >> str;
  }
}