#include <bits/stdc++.h>
using namespace std;

// structure of node
class node
{
public:
  int data;
  node *left;
  node *right;
  node(int data, node *left, node *right)
  {
    this->data = data;
    this->left =left;
    this->right =right;
  }
};

int search(int inorder[],int start,int end,int curr){

    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
 return -1;
}


void buildtree(node* &root,int preorder[],int inorder[],int start,int end){
 static int idx=0;
    if(start>end){
        return;
    }
    int curr=preorder[idx];
    idx++;
     root=new node(curr,NULL,NULL);


   if(start==end){
       return;
   }

    int pos=search(inorder,start,end,curr);
    buildtree(root->left,preorder,inorder,start,pos-1);

    buildtree(root->right,preorder,inorder,pos+1,end);
 return;
    

}
 
 void inorderprint(node* root){
     if(root==NULL){
         return;
     }
     inorderprint(root->left);
     cout<<root->data<<" ";
     inorderprint(root->right);
 }
void display(node *root)
{
    if (root == NULL)
    {
        return;
    }
    string str = "";
    str += root->left != NULL ? to_string(root->left->data) : ".";
    str += " <- " + to_string(root->data) + " -> ";
    str += root->right != NULL ? to_string(root->right->data) : ".";
    cout << str << endl;

    display(root->left);
    display(root->right);
}

int main()
{
    node* root;
int preorder[]={10,7,3,11,4,14,6};
int inorder[]={3,7,11,10,14,4,6};
buildtree(root,preorder,inorder,0,6);
inorderprint(root);
cout<<endl;
display(root);
}