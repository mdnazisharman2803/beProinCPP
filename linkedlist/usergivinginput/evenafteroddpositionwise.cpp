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
void evenafteroddpos(node* &head){
    node*odd=head;
    node*even=head->next;
    node*evenstart=even;
    while(odd->next!=NULL && even->next!=NULL){
       odd->next=even->next;
       odd=odd->next;
       even->next=odd->next;
       even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL){
     
        even->next=NULL;
    }
    return;
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

  creatinglink(head); 
  display(head);
  evenafteroddpos(head);
   display(head);
  return 0;
}