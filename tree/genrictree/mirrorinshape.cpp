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

bool areinshape(node* root1,node* root2){

    if(root1->children.size()!=root2->children.size()){
        return false;
    }

    for(int i=0;i<root1->children.size();i++){
        int j= root1->children.size()-1-i; // to iterate on second tree from right side as i from left
        node* child1=root1->children[i];
        node* child2=root2->children[j];

        if(areinshape(child1,child2)==false){
            return false;
        }
           
    }
    
    return true;
}



int main(){
    node* root1=NULL;
    node* root2=NULL;
    
int arr1[]={10, 20 ,-1 ,30, 50 ,-1, 60 ,-1 ,-1 ,40 ,-1 ,-1};
int n1=sizeof(arr1)/sizeof(arr1[0]);
creatingtree(root1,arr1,n1);
int arr2[]={100, 200, -1, 300, 500 ,-1 ,600, -1 ,-1, 400 -1 -1};
int n2=sizeof(arr2)/sizeof(arr2[0]);
creatingtree(root2,arr2,n2);
 
   cout<<areinshape(root1,root2);
  

}