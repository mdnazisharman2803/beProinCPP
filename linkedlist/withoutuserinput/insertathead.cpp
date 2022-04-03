#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(){}

    node(int val){
        data=val;
        next=NULL;
    }
};


void creatinglink(node* &head,int val){
    node* newnode= new node(val);    //dynamic memory allocation , here new function will allocate memory dynamically as the data type is node therefore new node like new int and that will be stored using pointer called newnode.   
    node* temp;
    
   if(head==NULL){
       head=temp=newnode;
       return; // return is lie kia kiu ke ek bar me ek hi element dalenge na
 }

 while(temp->next=NULL){
  
    temp= temp->next;
 }
 
    temp->next=newnode; 
 }

void insertathead(node* &head,int val){
     node* addnewnode= new node(val);
     addnewnode->next=head;
     head=addnewnode;
}

void display(node* head){
node* temp=head;

while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}
int main(){

  node* head=NULL;

  creatinglink(head,1);
  creatinglink(head,2);
    display(head);
  insertathead(head,3);
  display(head);
  return 0;
}