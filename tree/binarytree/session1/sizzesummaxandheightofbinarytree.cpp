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

class ppair
{
public:
    node *root;
    int state;

    ppair(node *root, int state)
    {
        this->root = root;
        this->state = state;
    }
};

void constructTree(node *&root, vector<int> &arr)
{
    root = new node(arr[0], NULL, NULL);
    ppair *rootpair = new ppair(root, 1);
    stack<ppair *> st;
    st.push(rootpair);
    int idx = 0; // to read arrray pointing to root
    while (st.size() > 0)
    {
        ppair *topp = st.top();
        if (topp->state == 1)
        {
            idx++;
            if (arr[idx] != -1)
            {

                topp->root->left = new node(arr[idx], NULL, NULL);
                ppair *leftpair = new ppair(topp->root->left, 1);
                st.push(leftpair);
            }
            else
            {
                topp->root->left = NULL;
            }

            topp->state++;
        }

        else if (topp->state == 2)
        {
            idx++;
            if (arr[idx] != -1)
            {

                topp->root->right = new node(arr[idx], NULL, NULL);
                ppair *rightpair = new ppair(topp->root->right, 1);
                st.push(rightpair);
            }
            else
            {
                topp->root->right = NULL;
            }

            topp->state++;
        }
        else
        {
            st.pop();
        }
    }
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
    if (root == NULL)
    {
        return INT_MIN;
    }
    int leftmax = maxnode(root->left);
    int rightmax = maxnode(root->right);
    int totalmax = max(root->data, max(leftmax, rightmax));
    return totalmax;
}

int height(node *root)
{
    if (root == NULL)
    {
        return -1; //return -1 when u measuring height wrt to edge and return 0 if ur measuring height wrt node
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    int totalheight = max(leftheight, rightheight) + 1;
    return totalheight;
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

    node *root;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;

        if (temp == "n")
        {
            arr[i] = -1;
        }
        else
        {
            arr[i] = stoi(temp);
        }
    }

    constructTree(root, arr);
    cout << "size of tree is: " << size(root) << endl;
    cout << "sum of nodes of tree is: " << sum(root) << endl;
    cout << "max node in tree is: " << maxnode(root) << endl;
    cout << "height wrt to edge in tree is: " << height(root) << endl;
    display(root);
}