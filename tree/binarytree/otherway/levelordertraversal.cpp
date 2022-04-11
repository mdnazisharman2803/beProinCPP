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
void levelorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    q.pop();

    while (!q.empty())
    {
        node *rootnode = q.front();
        q.pop();
        if (rootnode != NULL)
        {
            cout << rootnode->data << " ";
            if (rootnode->left)
            {
                q.push(rootnode->left);
            }
            if (rootnode->right)
            {
                q.push(rootnode->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
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

    levelorder(root);
}