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


class stack {

public:
node* top;


stack(){
    top=NULL;
}
public:
void push(int val,node &obj) {
    obj.size;
    node* newnode= new node();    //dynamic memory allocation , here new function will allocate memory dynamically as the data type is node therefore new node like new int and that will be stored using pointer called newnode.   
    newnode->data=val;
    newnode->next=top;
      
      top=newnode;
    
      obj.size=obj.size+1;
  return;
}
public:
int size(node obj) {
   return obj.size;
} 
  

public:
int Top()
{
    if(top==NULL){
    cout<<"stack empty underflow"<<endl;
    return -1;
    }

    return top->data;
}

public:
int pop()
{
    if(top==NULL){
       cout<<"no element to pop"<<endl;
       return -1;
    }
    int fck=top->data;
    top=top->next;
    return fck;
}

public:
void display() {
  node* temp1;
  temp1=top;
  while(temp1!=NULL){
  cout<<temp1->data<<endl;
  cout<<"|"<<endl;
  temp1=temp1->next;
    
}
cout<<"NULL"<<endl;
    }
};

int main() {
   
    
    
node obj;
obj.size=0;
 stack st;
  cout<<"choose option 'quit','push' 'pop', 'top','size','display'"<<endl;
  string str;
  cin >> str;

  while (str != "quit") {
    if (str == "push") {
      cout<<"enter data "<<endl;
        int val;
        cin>>val;
      st.push(val,obj);
    } 
    else if (str == "pop") {
      int ls = st.pop();
      if (ls != -1) {
        cout<<"element poped is: " << ls << endl;
      }
    }
    else if (str == "Top") {
      int t = st.Top();
      if (t != -1) {
        cout <<"value at top is: "<< t << endl;
      }

    }
    else if (str == "size") {
      cout<<"current size: " << st.size(obj) << endl;
    } 
    else if (str == "display") {
      st.display();
    }
    
    cout<<"what do u want to do please choose next "<<endl;
     cout<<"choose option 'quit', 'push',pop', 'Top','size','display','empty' "<<endl;
    cin >> str;
  }
} 