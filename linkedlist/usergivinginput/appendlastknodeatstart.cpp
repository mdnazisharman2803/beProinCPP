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


void creatinglink(node* &head,node &obj){
    
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
       head=tempo=newnode;
     obj.size=obj.size+1;
   }

 else {

   tempo->next=newnode; 
     tempo=newnode;
      obj.size=obj.size+1;

    }
    cout<<"do you want to continue  again give choice?"<<endl;
    cin>>choice;

 }
return;
}
void sizeofll(node obj){
  
 cout<<"size of linked list is: "<<obj.size;

}

void appendlastknodeatbeginning(node* &head,int k,node obj){
    node*newtail;
    node*tail=head;
    node* newhead;
int count=1;
k=k%obj.size; //if k>size
while(tail->next!=NULL){
    if(count==obj.size-k){
        newtail=tail;
    }
    if(count==obj.size-k+1){
  newhead=tail;

}
tail=tail->next;
count++;

}

newtail->next=NULL;
tail->next=head;
 
 head=newhead;
return;

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

int key;
node obj;
obj.size=0;

 creatinglink(head,obj);

 display(head);
//sizeofll(obj);
int k;
cout<<"enter k group to come at beginning"<<endl;
cin>>k;
  appendlastknodeatbeginning(head,k,obj);
 display(head);
  return 0;
}