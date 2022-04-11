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

bool nodetopath(node *root, int data, vector<int> &pth)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->data == data)
    {
        pth.push_back(root->data);
        return true;
    }
    bool filc = nodetopath(root->left, data, pth);
    if (filc)
    {
        pth.push_back(root->data);
        return true;
    }
    bool firc = nodetopath(root->right, data, pth);
    if (firc)
    {
        pth.push_back(root->data);
        return true;
    }
   
    return false;
}

int lowestcommonancestor(node *root, int k1, int k2)
{
    vector<int> p1;
    vector<int> p2;

    if (!nodetopath(root, k1, p1) || !nodetopath(root, k2, p2))
    {
        return -1;
    }

    int i = p1.size() - 1;
    int j = p2.size() - 1;
    while (i >= 0 && j >= 0 && p1[i] == p2[j])
    {
        i--;
        j--;
    }
    i++;
    j++;
    return p1[i];
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
    int k1;
    cin>>k1;
    int k2;
    cin>>k2;
    int f = lowestcommonancestor(root,k1, k2);
    cout << "lowest common ancestor is: " << f;
}
