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
void reverseiterative(node* &head){

    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    head=prevptr;
    return;

}
void addtwolist(node* &head,node* head1,node* head2){
    node*first=head1;
    node*second=head2;
    int c=0;
    int s=0;
    node* temp; //store after addiong two ll
    node* res=NULL; //final ans
    node* curr=NULL; // to itertate
    while(first!=NULL ||  second!=NULL){
     s=c+(first?first->data:0)+(second?second->data:0);
     c=(s>=10)?1:0;
     s=s%10;
     temp=new node(s);
     if(res==NULL){
         res=temp;
     }
      else{
          curr->next=temp;
      }
      curr=temp;
      if(first) first=first->next;
      if(second) second=second->next;
    }

    if(c>0){
        temp=new node(c);
        curr->next=temp;
        curr=temp;
    }
   
   head=res;
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
  node* head1=NULL;
  node* head2=NULL;
  
cout<<"make first linked list....."<<endl;
 creatinglink(head1);
 //display(head1); 
 reverseiterative(head1);
 //  display(head1);
cout<<"make second linked list....."<<endl;
 creatinglink(head2);
 //  display(head2);
reverseiterative(head2);
 // display(head2);
 addtwolist(head,head1,head2);
  //display(head);
 reverseiterative(head);
 cout<<"done reversing";
display(head);
  return 0;
}