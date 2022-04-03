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
void addatindex(node* &head,int key){
      cout<<"enter data at kth position "<<endl;
    int vallatk;
        cin>>vallatk;
        
    node* newnodee= new node;    //dynamic memory allocation , here new function will allocate memory dynamically as the data type is node therefore new node like new int and that will be stored using pointer called newnode.   
    newnodee->data=vallatk;
    newnodee->next=NULL;



   node* tempi=head;
    
   if(key==0){
     newnodee->next=head;
     head=newnodee;
       return;
   }
   

 for(int pos=0;pos<key-1;pos++){
     tempi=tempi->next;
 }
 
  
      newnodee->next=tempi->next;
      tempi->next=newnodee;
 
      
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
cout<<"size of linked list is: "<<count;
   

}
int main(){

  node* head=NULL;
int key;

  creatinglink(head);
  cout<<" enter key at which u want enter data ";
cin>>key;
  addatindex(head,key); 
  display(head);
  return 0;
}