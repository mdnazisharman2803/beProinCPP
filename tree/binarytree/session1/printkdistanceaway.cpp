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
//node to to root path
static vector<node *> path;

bool find(node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->data == data)
    {
        path.push_back(root);
        return true;
    }
    bool filc = find(root->left, data);
    if (filc)
    {
        path.push_back(root);
        return true;
    }
    bool firc = find(root->right, data);
    if (firc)
    {
        path.push_back(root);
        return true;
    }

    return false;
}

//k level down

void printkleveldown(node *root, int k, node *blocker)
{

    if (root == NULL || k < 0 || root == blocker)
    {
        return;
    }

    if (k == 0)
    {
        cout << root->data << " ";
    }

    printkleveldown(root->left, k - 1, blocker);
    printkleveldown(root->right, k - 1, blocker);
}

//k distance away

void printKNodesFar(node *root, int data, int k)
{
   
    find(root, data);

    for (int i = 0; i < path.size(); i++)
    {
        printkleveldown(path[i], k - i, i == 0 ? NULL : path[i - 1]);
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
    // display(root);
    int data;
    cin >> data;
    int k;
    cin >> k;

    printKNodesFar(root, data, k);
}