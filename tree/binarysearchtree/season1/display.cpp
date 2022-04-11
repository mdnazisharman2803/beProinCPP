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
        this->left = left;
        this->right = right;
    }
};

node* constructTree(int arr[], int low, int high)
{
    if (low > high)
    {
        return NULL;
    }

    int mid = (low + high) / 2;
    int data = arr[mid];

    node *leftchild = constructTree(arr, low, mid - 1);
    node *rightchild = constructTree(arr, mid + 1, high);

    node* newnode = new node(data, leftchild, rightchild);
    return newnode;
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

    int n;
    cin >> n;

  
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

  node*  root = constructTree(arr, 0, n - 1);
    display(root);
}