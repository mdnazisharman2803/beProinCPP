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

int size(node* root){
    int s=0;
    for(node*child:root->children){
        int cs=size(child);
        s=s+cs;
    }

s=s+1;
return s;
}
int maxintree(node* root){
  int m= INT_MIN;
  for(node*child:root->children){

      int cm=maxintree(child);
      m=max(m,cm);
  }
m=max(root->data,m);
return m;
}
int heightoftree(node* root){
    int h=-1;
    for(node*child:root->children){
        int ch=heightoftree(child);
        h=max(ch,h);
    }
    h=h+1;
    return h;
}

void traversal(node* root){
cout<<"node pre "<<root->data<<endl;
 for(node*child:root->children){
     cout<<"Edge pre"<<root->data<<"--"<<child->data<<endl;

     traversal(child);
     cout<<"Edge post"<<root->data<<"--"<<child->data<<endl;
 }
 cout<<"node post "<<root->data<<endl;
}


int main(){
    node* root=NULL;
    
int arr[]={10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};
int n=sizeof(arr)/sizeof(arr[0]);
creatingtree(root,arr,n);
cout<<"size or total no of node is: "<<size(root)<<endl;
traversal(root);
cout<<"max value in tree is: "<<maxintree(root)<<endl;
cout<<"height of tree is: "<<heightoftree(root)<<endl;
}