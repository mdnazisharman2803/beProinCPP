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

node *constructTree(int arr[], int *preorderidx, int key, int min, int max, int n)
{
    if (*preorderidx > n)
    {
        return NULL;
    }

    node *root = NULL;

    if (key > min && key < max)
    {
        root = new node(key, NULL, NULL);
        *preorderidx = *preorderidx + 1;

        if (*preorderidx < n)
        {
            root->left = constructTree(arr, preorderidx, arr[*preorderidx], min, key, n);
        }

        if (*preorderidx < n)
        {
            root->right = constructTree(arr, preorderidx, arr[*preorderidx], key, max, n);
        }
    }

    return root;
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
    int preorderidx = 0;
    node *nroot = constructTree(arr, &preorderidx, arr[0], INT_MIN, INT_MAX, n);
    display(nroot);
}