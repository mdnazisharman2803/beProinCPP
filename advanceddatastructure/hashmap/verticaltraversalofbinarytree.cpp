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

int search(int inorder[], int start, int end, int curr)
{

    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

void buildtree(node *&root, int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return;
    }
    int curr = preorder[idx];
    idx++;
    root = new node(curr, NULL, NULL);

    if (start == end)
    {
        return;
    }

    int pos = search(inorder, start, end, curr);
    buildtree(root->left, preorder, inorder, start, pos - 1);

    buildtree(root->right, preorder, inorder, pos + 1, end);
    return;
}

void getverticalorder(node *root, int hds, map<int, vector<int>> &m)
{

    if (root == NULL)
    {
        return;
    }

    m[hds].push_back(root->data);

    getverticalorder(root->left, hds - 1, m);
    getverticalorder(root->right, hds + 1, m);
}

int main()
{
    node *root;
    int preorder[] = {10, 7, 3, 11, 4, 14, 6};
    int inorder[] = {3, 7, 11, 10, 14, 4, 6};
    buildtree(root, preorder, inorder, 0, 6);

    map<int, vector<int>> m;

    int hds = 0;

    getverticalorder(root, hds, m);

    map<int, vector<int>>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {

        for (int i = 0; i < (it->second).size(); i++)
        {

            cout << (it->second)[i] << " ";
        }

        cout << endl;
    }
}