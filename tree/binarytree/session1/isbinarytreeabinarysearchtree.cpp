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

class bstpair
{
public:
    bool isbst = false;
    int min = 0;
    int max = 0;

    
};

bstpair chkbst(node *root)
{   
  if (root == NULL)
  {
    bstpair baseresult;
    baseresult.isbst = true;
    baseresult.min = INT_MAX;
    baseresult.max = INT_MIN;
    
    return baseresult;
  }

    bstpair left = chkbst(root->left);
    bstpair right = chkbst(root->right);

    bstpair mypair;

    if (left.isbst == true && right.isbst == true && (root->data >= left.max && root->data <= right.min))
    {
        mypair.isbst = true;
    }
    mypair.min = min(root->data, min(left.min, right.min));
    mypair.max = max(root->data, max(left.max, right.max));

    return mypair;
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

    bstpair r = chkbst(root);
    if (r.isbst == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    //  display(root);
}