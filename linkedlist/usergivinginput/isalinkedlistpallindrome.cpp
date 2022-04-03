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

node* midelemnentlater(node* head){
    
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next !=NULL){
        fast=fast->next->next;
        slow=slow->next;
        
    }

    
    return slow;
}
node* reverseiterative(node* &mid){

    node* prevptr=NULL;
    node* currptr=mid;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    
    return prevptr;

}
void ispallindrome(node* head){
    node*mid=midelemnentlater(head);
    node*last=reverseiterative(mid);
    node*first=head;
    while(last!=NULL){
        if(first->data!=last->data){
           cout<<"not a palindromr "<<endl;
           return;
        }
        else{
            first=first->next;
            last=last->next;
        }
    }
    cout<<"is a palindrme"<<endl;
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
ispallindrome(head);
  return 0;
}