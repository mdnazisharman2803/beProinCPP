#include <iostream>
#include <exception>
using namespace std;
class node{
    public:
    int data;
    int size;
    node* next;
    node(){}

    node(int val){
        data=val;
        next=NULL;
    }
};


class queue {

public:
node* front;
node* back;


queue(){
    front=NULL;
    back=NULL;
}
public:
void enqueue(int val,node &obj) {
    obj.size;
    node* newnode= new node();    //dynamic memory allocation , here new function will allocate memory dynamically as the data type is node therefore new node like new int and that will be stored using pointer called newnode.   
    newnode->data=val;
    newnode->next=NULL;
      if(front==NULL&back==NULL){
          back=newnode;
          front=newnode;
      }
      back->next=newnode;
      back=newnode;
    
      obj.size=obj.size+1;
  return;
}
public:
int size(node obj) {
   return obj.size;
} 
  

public:
int peek()
{
    if(front==NULL){
    cout<<"queue empty underflow"<<endl;
    return -1;
    }

    return front->data;
}

public:
int dequeue()
{
    if(back==NULL){
       cout<<"no element to dequeue"<<endl;
       return -1;
    }
    int fck=front->data;
    front=front->next;
    return fck;
}

public:
void display() {
  node* temp1;
  temp1=front;
  while(temp1!=NULL){
  cout<<temp1->data<<"--";
 
  temp1=temp1->next;
    
}
cout<<"NULL"<<endl;
    }
};

int main() {
   
    
    
node obj;
obj.size=0;
queue q;
  cout<<"choose option 'quit','enqueue' 'dequeue', 'peek','size','display' "<<endl;
  string str;
  cin >> str;

  while (str != "quit") {
    if (str == "enqueue") {
      int val;
      cin >> val;
      q.enqueue(val,obj);
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
      cout<<"current size: " << obj.size<< endl;
    } 
    else if (str == "display") {
      q.display();
    }
     
    
    cout<<"what do u want to do please choose next "<<endl;
  cout<<"choose option 'quit','enqueue' 'dequeue', 'peek','size','display'"<<endl;
    cin >> str;
  }
}
 