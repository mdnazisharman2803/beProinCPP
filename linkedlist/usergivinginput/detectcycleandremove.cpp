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
void makecycle(node* &head,int pos){
    int count=1;
    node* temp=head;
    node* startcyclenode;
    while(temp->next!=NULL){

        if(count==pos){
            startcyclenode=temp;
        }
   
        temp=temp->next;
             count++;
        
    }
    temp->next=startcyclenode;
    if(temp->next==startcyclenode){
        return;
    }
   
}
void detectcycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            cout<<" cycle is present and fast and slow meet at "<<fast->data<<endl;
            return;
        }
    }
cout<<"cycle not prsent "<<endl;
return;
}
void removecycle(node*head){

    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    
    cout<<"cycle was at "<<fast->next->next->data<<endl;
    slow ->next=NULL;
    
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
  cout<<"linked formed lets make cycle "<<endl;
  int pos;
  cout<<"enter pos at which u want to form cycle "<<endl;
  cin>>pos;
makecycle(head,pos);
//display(head);
detectcycle(head);
removecycle(head);
detectcycle(head);
display(head);
  return 0;
}