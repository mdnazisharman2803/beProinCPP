#include<iostream>
using namespace std;

class node{
    public:
    int data;
    int size;
    node* next;
    node(){}

    node(int val){
        data=val;
        next=NULL;
    }
};


void creatinglink(node* &head,node &obj){
    
 obj.size;
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
     obj.size=obj.size+1;
   }

 else {

   tempo->next=newnode; 
     tempo=newnode;
      obj.size=obj.size+1;

    }
    cout<<"do you want to continue  again give choice?"<<endl;
    cin>>choice;

 }
return;
}
void sizeofll(node obj){
  
 cout<<"size of linked list is: "<<obj.size;

}
void deleteindex(node* &head,int key,node obj){
    node* previndtodel=head;
      node* todelete=head;
  if(key==0){
         head=head->next;
      delete todelete;
      return;
  }

for(int pos =0;pos<obj.size-1;pos++){
    if(pos==key-1){
        previndtodel->next=previndtodel->next->next;
        return;
    }
    
previndtodel=previndtodel->next;
    
}

if(key==obj.size){
previndtodel->next=NULL;
return;
}
  
  if(obj.size==0){
     
  cout<<"empty linked list cant delete"<<endl;
      return;
   }
   if(key>obj.size){
       cout<<"invalid request so cant delete "<<endl;
    return;
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
//cout<<"size of linked list is: "<<count;
   

}
int main(){

  node* head=NULL;

int key;
node obj;
obj.size=0;

 creatinglink(head,obj);
 display(head);
//sizeofll(obj);

  cout<<" enter key at which u want to delete ";
cin>>key;
  deleteindex(head,key,obj); 
 display(head);
  return 0;
}