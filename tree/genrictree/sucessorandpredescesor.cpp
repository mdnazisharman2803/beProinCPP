#include <bits/stdc++.h>
using namespace std;
// defining node 
class node{
    public:
    int data;
    vector<node*> children;

    node(int val){
        this->data=val;
    }

};




void creatingtree(node* &root,int arr[],int n){

   stack<node*> st;
   for(int i=0;i<n;i++){

   if(arr[i]==-1){
       st.pop();
   }

   else{
    node* newnode= new node(arr[i]);    
    
    

       if(st.size()>0){
           
         st.top()->children.push_back(newnode);
       }
       else{
           root=newnode;
       }
            st.push(newnode);
   }
}
}
node* predecessor=NULL;
node* successor=NULL;
int state=0;
void predecessorandsuccessor(node* root, int data){
 if(state==0){
    if(root->data==data){
        state=1;
    }
    else{
        predecessor=root;
    }
 }
 else if(state==1){
    successor=root;
    state=2;
 }

    for(node*child:root->children){
        predecessorandsuccessor(child,data);
    }
}

int main(){
    node* root=NULL;
    
int arr[]={10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};
int n=sizeof(arr)/sizeof(arr[0]);
creatingtree(root,arr,n);
 predecessorandsuccessor(root,90);
 cout<<"predecessor of 90 is : "<<predecessor->data<<endl;
 cout<<"successor of 90 is : "<<successor->data<<endl;
;

}