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
int size=0;
int mini=INT_MAX;
int maxi=INT_MIN;
int height=0;

void multisolver(node* root, int depth){
size++;
maxi=max(maxi,root->data);
mini=min(mini,root->data);
height=max(height,depth);

    for(node*child:root->children){
        multisolver(child,depth+1);
    }
}

int main(){
    node* root=NULL;
    
int arr[]={10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};
int n=sizeof(arr)/sizeof(arr[0]);
creatingtree(root,arr,n);
 multisolver(root,0);
 cout<<"size of tree is : "<<size<<endl;
 cout<<"height of tree is : "<<height<<endl;
 cout<<"max element in tree is : "<<maxi<<endl;
 cout<<"min element in tree is : "<<mini<<endl;

}