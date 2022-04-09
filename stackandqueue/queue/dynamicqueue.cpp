#include <iostream>
#include <exception>
using namespace std;
// updated
class queue {

public:
  int* arr;
  int front;
  int back;
  int length;
  int MaxCapacity;

public:
  queue(int size) {
    this->MaxCapacity = size;
    this->arr = new int[this->MaxCapacity];
    this->front = -1;
    this->back=-1;
    this->length=0;
  }

public:
  int size() {
      return length;
  }

public:
  void enqueue(int data) {
     if(back==MaxCapacity-1){
    int* narr=new int [2*MaxCapacity];
      for(int i=0;i<length;i++){
          narr[i]=arr[i];

      }
      arr=narr;
      front=-1;
        }

   back++;
   
   arr[back]=data;
   length++;
   if(front==-1){
       front++;
   }
  }

public:
  int peek()
  {
     if(front==-1||front>back){
       cout<<"no element to show"<<endl;
       return -1;
   }
    return arr[front];
  }

public:
  int dequeue()
  {
     if(front==-1||front>back){
       cout<<"no element to dequeue"<<endl;
       return -1;
   }
   int m=arr[front];
   
   
    front++;
   
  return m;
  }

public:
  void display() {
    for(int i=front;i<length;i++){
       cout<<arr[i]<<"--";
   }
   cout<<endl;
  }
  public:
  bool empty(){
     if(front==-1||front>back){
             return true;
   }
   return false;
}
};

int main() {
    
  int n;
  cout<<"enter size of queue in the form of array: "<<endl;
  cin >> n;
  queue q(n);
  cout<<"choose option 'quit','enqueue' 'dequeue', 'peek','size','display','empty' "<<endl;
  string str;
  cin >> str;

  while (str != "quit") {
    if (str == "enqueue") {
      int val;
      cin >> val;
      q.enqueue(val);
    } 
    else if (str == "dequeue") {
      int val = q.dequeue();
      if (val != -1) {
        cout<<"element removed is: " << val << endl;
      }
    }
     else if (str == "peek") {
      int val = q.peek();
      if (val != -1) {
        cout <<"element at front: "<<val << endl;
      }

    }
     else if (str == "size") {
      cout<<"current size: " << q.size() << endl;
    } 
    else if (str == "display") {
      q.display();
    }
     else if (str == "empty") {
     cout<<q.empty()<<endl;
    }
    cout<<"what do u want to do please choose next "<<endl;
  cout<<"choose option 'quit','enqueue' 'dequeue', 'peek','size','display','empty' "<<endl;
    cin >> str;
  }
}
