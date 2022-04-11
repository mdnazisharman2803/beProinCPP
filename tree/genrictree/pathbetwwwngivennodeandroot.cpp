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

vector<int> nodetopath(node* root,int k){
    //if n=root itself a data 
    if(root->data==k){
        vector<int>baseresult;
        baseresult.push_back(root->data);
        return baseresult;
    }
// if data !=root therefor call for children
    for(node* child:root->children){
        vector<int>pathtillchildren=nodetopath(child,k);
        
        if(pathtillchildren.size()>0){  //it means the required data must be present here
            pathtillchildren.push_back(root->data);
            return pathtillchildren;
        }
    }
// if we come out of this for looop means no data is found hence we have to return empty list
    vector<int> emptylist;
    return emptylist;
}


int main(){
    node* root=NULL;
    
int arr[]={10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};
int n=sizeof(arr)/sizeof(arr[0]);
creatingtree(root,arr,n);

int k=120;
vector<int>ntor= nodetopath(root,k);

for(int i=0;i<ntor.size();i++){
    cout<<ntor[i];
      if (i !=ntor.size() - 1)
      cout << "->";
  }
}


