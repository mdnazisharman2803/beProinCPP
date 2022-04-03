#include<iostream>
using namespace std;

class node{
    public:
    int data;
   node* next;
  /*   node(){}                // even we do not make constructor we can acces data as data members and member function is public.
   node(int val){
        data=val;
        next=NULL;
    } */                             

    
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

void display(node* head){
node* temp=head;

while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}

bool search(node* head, int key){
    node* tempsearch;
    tempsearch=head;
    while(tempsearch!=NULL){
        if(tempsearch->data==key){
           cout<<" data found at "<<tempsearch->next;
         return true;
        
        }
         tempsearch=tempsearch->next;
    }
     return false;
}

int main(){

  node* head=NULL;

  creatinglink(head); 
  int key;
  cout<<"enter data you want to search ";
  cin>>key;
  cout<<search(head,key);
 // display(head);
  return 0;
}