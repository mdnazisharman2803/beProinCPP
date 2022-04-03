#include<iostream>
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


void creatinglink(node* &head,node* &tail,node &obj){
    
 obj.size;
   cout<<"enter choice "<<endl;
    int choice;
    cin>>choice;
   
    while(choice!=0){
        cout<<"enter data "<<endl;
        int val;
        cin>>val;
    node* newnode= new node;    //dynamic memory allocation , here new function will allocate memory dynamically as the data type is node therefore new node like new int and that will be stored using pointer called newnode.   
    newnode->data=val;
    newnode->next=NULL;
node* tempo;
    
   if(head==NULL){
       head=tail=tempo=newnode;
     obj.size=obj.size+1;
   }

 else {

   tempo->next=newnode; 
     tempo=newnode;
     tail=tail->next;
      obj.size=obj.size+1;

    }
 ;
    cout<<"do you want to continue  again give choice?"<<endl;
    cin>>choice;

 }
return;
}
void sizeofll(node obj){
  
 cout<<"size of linked list is: "<<obj.size;

}
node* mergetwosortedll(node*& a,node* &mid,node*tail){
    node* p1=a;
    node* p2= mid->next;

node* dummynode=new node();
dummynode->data=-1;
dummynode->next=NULL;
node* p3=dummynode;
while(p1!=NULL && p2!=NULL){
     if(p1->data<p2->data){
    p3->next=p1;
    p1=p1->next;
    p3=p3->next;
    }
    else{
    p3->next=p2;
    p2=p2->next;
    }
}
while(p1!=NULL){
    p3->next=p1;
    p1=p1->next;
    p3=p3->next;
}

while(p2!=NULL){
    p3->next=p2;
    p2=p2->next;
    p3=p3->next;
}
 
 
  
  return  dummynode->next;
}

node* midnode(node* left,node* tail){
  node* fast=left;
  node* slow=left;
while(fast!=tail && fast->next!=tail){
    fast=fast->next->next;
    slow=slow->next;
}
return slow;
}
node* mergesort(node* head,node* tail){
if(head==NULL && head->next==NULL){
  return head;
}

node* mid= midnode(head,tail);
node*a=head;
node*b=mid->next;
mid->next=NULL;
   a=mergesort(a,mid);
    b=mergesort(b,tail);
   return  mergetwosortedll(a,mid,tail);
}
 void display(node* head){
node* templ=head;
int count=0;

while(templ!=NULL){
    cout<<templ->data<<"->";
    count++;
    templ=templ->next;
    
}
cout<<"NULL"<<endl;
//cout<<"size of linked list is: "<<count;
   

} 
 
   


int main(){

  node* head=NULL;
  node*tail=NULL;

int key;
node obj;
obj.size=0;

 creatinglink(head,tail,obj);
 display(head);

node*left=head;
 node*newhead =mergesort(head,tail);
 display(newhead);
  return 0;
}