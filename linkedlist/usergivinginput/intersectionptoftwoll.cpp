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
 void makeintrtsectat(node* &head1,node* &head2,int pos){
          node* temp1=head1;
          int k=pos-1;
          while(k!=0){
              temp1=temp1->next;
              k--;
          }

          node*temp2=head2;

          while(temp2->next!=NULL){
              temp2=temp2->next;
          }
          temp2->next=temp1;
          return;

  }
  int length(node*head){
      int l=0;
      node* temp=head;
      while(temp!=NULL){
   temp=temp->next;
      }
      return l;
  }
  int  findintersection(node* &head1,node* &head2){
          int l1=length(head1);
          int l2=length(head2);

        int diff=0;
        node* ptr1;
        node* ptr2;

        if(l1>l2){
           diff=l1-l2;
          ptr1=head1;
          ptr2=head2;  
        }
        else{
           diff=l2-l1;
          ptr1=head2;
          ptr2=head1;  
        
        }
        int ll=diff-2;
        while(ll){
               ptr1=ptr1->next;
            if(ptr1=NULL){
                return -1;
            }
       
          ll--;
        }
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1==ptr2){
                return ptr1->data;
            }
             ptr1=ptr1->next;
              ptr2=ptr2->next;
        }

        return -1;
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
cout<<"first list...."<<endl;
  creatinglink(head1);
  cout<<"second list...."<<endl; 
   creatinglink(head2);
  int pos;
  cout<<"enter pos where u want to intersct list "<<endl;
  cin>>pos;
  makeintrtsectat(head1,head2,pos);
  display(head1);
   display(head2);
   int bsdk=findintersection(head1,head2);
 cout<<"Two linkedlist intersected at value: "<<bsdk<<endl;
  return 0;
}