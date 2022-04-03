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
void addlast(node* &head){
      cout<<"enter data atlast "<<endl;
    int vallast;
        cin>>vallast;
    node* newnodee= new node;    //dynamic memory allocation , here new function will allocate memory dynamically as the data type is node therefore new node like new int and that will be stored using pointer called newnode.   
    newnodee->data=vallast;
    newnodee->next=NULL;



   node* tempi;
    
   if(head==NULL){
       head=tempi=newnodee;
       return;
   }

 else {

   tempi->next=newnodee; 
     tempi=newnodee;

    }
      
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

  creatinglink(head);
  addlast(head); 
  display(head);
  return 0;
}