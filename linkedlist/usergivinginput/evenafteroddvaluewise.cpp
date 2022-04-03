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
void evenafteroddval(node* &head){
    node*even=NULL;
    node*odd=NULL;
    node*o=NULL;
    node*e=NULL;
    node*temp=head;
     while(temp!=NULL){
       if(temp->data%2==0){
           if(even==NULL){
               even=temp;
               e=temp;
           }
           else{
               e->next=temp;
               e=e->next;
           }
       }
       else{
           if(odd==NULL){
               odd=temp;
               o=temp;
           }
           else{
               o->next=temp;
               o=o->next;
               }
       }
       temp=temp->next;

     }

     if(e!=NULL){
         e->next=odd;
     }
     if(o!=NULL){
         o->next=NULL;
     }
     if(even!=NULL){
     head=even;
       return;
     }
     else{
         head=odd;
         return;
     }
   
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
  evenafteroddval(head);
   display(head);
  return 0;
}