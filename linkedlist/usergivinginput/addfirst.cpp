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


void creatinglink(node* &head){
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
   }

 else {

   tempo->next=newnode; 
     tempo=newnode;

    }
    cout<<"do you want to continue  again give choice?"<<endl;
    cin>>choice;
 }
return;
}
void addfirst(node* &head){
      cout<<"enter data atfirst "<<endl;
    int vallfrst;
        cin>>vallfrst;
    node* newnodee= new node;    //dynamic memory allocation , here new function will allocate memory dynamically as the data type is node therefore new node like new int and that will be stored using pointer called newnode.   
    newnodee->data=vallfrst;
    newnodee->next=NULL;

     if(head==NULL){
       head=newnodee;
       return;
   }
else{
    newnodee->next=head;
    head=newnodee;
}
}
void display(node* head){
node* temp=head;
int count=0;
while(temp!=NULL){
    cout<<temp->data<<"->";
    count++;
    temp=temp->next;

}
cout<<"NULL"<<endl;
cout<<"size of the linkedlist: "<<count<<endl;
}
int main(){

  node* head=NULL;

  creatinglink(head);
  addfirst(head); 
  display(head);
  return 0;
}