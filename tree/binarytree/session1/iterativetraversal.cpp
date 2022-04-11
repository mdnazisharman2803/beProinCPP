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

//iterative

class ppairr
{
public:
    node *root;
    int state;

    ppairr(node *root, int state)
    {
        this->root = root;
        this->state = state;
    }
};

void iterativePreAndPostOrder(node *root)
{

    stack<ppairr *> stk;

    stk.push(new ppairr(root, 1));
    string pre = "";
    string in = "";
    string pos = "";

    while (stk.size() > 0)
    {
        ppairr *topp = stk.top();

        if (topp->state == 1)
        {
            pre += to_string(topp->root->data) + " ";
            topp->state++;

            if (topp->root->left != NULL)
            {
                stk.push(new ppairr(topp->root->left, 1));
            }
        }
        else if (topp->state == 2)
        {
            in += to_string(topp->root->data) + " ";
            topp->state++;
            if (topp->root->right != NULL)
            {
                stk.push(new ppairr(topp->root->right, 1));
            }
        }
        else
        {

            pos += to_string(topp->root->data) + " ";
            stk.pop();
        }
    }
    cout << pre << endl;
    cout << in << endl;
    cout << pos;
}

//iterative

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
    iterativePreAndPostOrder(root);
}