#include<bits/stdc++.h>
#include<iostream>
using namespace std;

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



int maximumsumofsubtree=INT_MIN;
int nodewithmaximumsum=0;

int sumofsubtree(node* root){
   int sum=0; 
   for(node*child:root->children){
   int childsum=sumofsubtree(child);
   sum+=childsum;
   }
   sum+=root->data;
   if(sum>maximumsumofsubtree){
       nodewithmaximumsum=root->data;
       maximumsumofsubtree=sum;
   }

   return sum;
}

int main() {

 node* root;

  int n;
  cin >> n;
 

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  creatingtree(root,arr,n);

int sumoftotaltree=  sumofsubtree(root);
 cout<<nodewithmaximumsum<<" "<<maximumsumofsubtree;
}
  
