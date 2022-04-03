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

void mergetwosortedll(node* &head,node* &head1,node* &head2){
    node* p1=head1;
    node* p2=head2;

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
 
  head=dummynode->next;
  return;
}
void recursivemergetwosortedll(node* &headB,node* &head3,node* &head4){
    if(head3==NULL){
       headB=head4;
        
       return;  
    }
    if(head4==NULL){
       headB=head3;
     
       return;  
    }
    if(head3->data<head4->data){
        headB=head3;
        recursivemergetwosortedll(headB->next,head3->next,head4);
    }
    else{
        headB=head4;
        recursivemergetwosortedll(headB->next,head3,head4->next);
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
  node*head=NULL;
  node* head1=NULL;
  node* head2=NULL;
// cout<<"form first sorted linked list..... "<<endl;
 // creatinglink(head1);
 //  display(head1); 
 // cout<<"form second sorted linked list..... "<<endl;
 // creatinglink(head2);
//  display(head2);
//  cout<<"formed sorted linked list..... "<<endl;
//  mergetwosortedll(head,head1,head2);
//  display(head);

  //using recursion
  node*headB=NULL;
  node* head3=NULL;
  node* head4=NULL;
  cout<<"form third sorted linked list..... "<<endl;
  creatinglink(head3);
   display(head3); 
  cout<<"form fourth sorted linked list..... "<<endl;
  creatinglink(head4);
  display(head4);
  cout<<"formed sorted linked list..... "<<endl;
  recursivemergetwosortedll(headB,head3,head4);
  display(headB);
  return 0;
}