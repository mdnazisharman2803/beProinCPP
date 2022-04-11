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

void constructTree(node *&root, int arr, int low, int high)
{
    if (low > high)
    {
        return;
    }
    int mid = (low + high) / 2;
    int data = arr[mid];

    node *leftchild = constructTree(root, arr, low, mid - 1);
    node *rightchild = constructTree(root, arr, mid + 1, high);

    root = new node(data, leftchild, rightchild);
    return;
}

int main()
{

    int n;
    cin >> n;

    node *root;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    constructTree(root, arr, 0, n - 1);
}