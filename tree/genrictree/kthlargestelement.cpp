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




int ceilll= INT_MAX;  //greater value than data but smallest in the largest of tree
int flloor = INT_MIN; //smaller value than data but greater in the smallest of tree

void cnf(node* root, int data) {

if(root->data>data){
    if(root->data<ceilll){
        ceilll=root->data;
    }
}

if(root->data<data){
    if(root->data>flloor){
       flloor=root->data;
    }
}

for(node* child:root->children){
   cnf(child,data);
}

}
int kthlarge(node* root, int k)
{
  int data=INT_MAX;
  for(int i=0;i<k;i++){
      cnf(root,data);
      data=flloor;
      flloor=INT_MIN;
  }
return data;
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

  int k;
  cin >> k;

  int kthlrg = kthlarge(root, k);
  cout << kthlrg;
}
  
