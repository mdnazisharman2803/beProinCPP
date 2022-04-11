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

node *constructTree(int arr[], int low, int high)
{
    if (low > high)
    {
        return NULL;
    }

    int mid = (low + high) / 2;
    int data = arr[mid];

    node *leftchild = constructTree(arr, low, mid - 1);
    node *rightchild = constructTree(arr, mid + 1, high);

    node *newnode = new node(data, leftchild, rightchild);
    return newnode;
}

int size(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftsize = size(root->left);
    int rightsize = size(root->right);
    int totalsize = leftsize + rightsize + 1;
    return totalsize;
}

int sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftsum = sum(root->left);
    int rightsum = sum(root->right);
    int totalsum = leftsum + rightsum + root->data;
    return totalsum;
}

int maxnode(node *root)
{
    if (root->right != NULL)
    {
        return maxnode(root->right);
    }
    else
    {
        return root->data;
    }
}

int minnode(node *root)
{
    if (root->left != NULL)
    {
        return minnode(root->left);
    }
    else
    {
        return root->data;
    }
}

bool find(node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    if (data > root->data)
    {
        return find(root->right, data);
    }
    else if (data < root->data)
    {
        return find(root->left, data);
    }
    else
    {
        return true;
    }
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

    node *root = constructTree(arr, 0, n - 1);
     int data;
    cin >> data;


    cout << size(root) << endl;
    cout << sum(root) << endl;
    cout << maxnode(root) << endl;
    cout << minnode(root) << endl;

   
    if (find(root, data))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}