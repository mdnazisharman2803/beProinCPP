#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int val, node *left, node *right)
    {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void construct(node *&root, vector<int> &arr)
{
    root = new node(arr[0], nullptr, nullptr);
    pair<node *, int> p = {root, 1};

    stack<pair<node *, int>> st;
    st.push(p);

    int idx = 1;
    while (!st.empty())
    {
        if (st.top().second == 1)
        {
            st.top().second++;
            if (arr[idx] != -1)
            {
                st.top().first->left = new node(arr[idx], nullptr, nullptr);
                pair<node *, int> lp = {st.top().first->left, 1};
                st.push(lp);
            }
            else
            {
                st.top().first->left = nullptr;
            }
            idx++;
        }
        else if (st.top().second == 2)
        {
            st.top().second++;
            if (arr[idx] != -1)
            {
                st.top().first->right = new node(arr[idx], nullptr, nullptr);
                pair<node *, int> rp = {st.top().first->right, 1};
                st.push(rp);
            }
            else
            {
                st.top().first->right = nullptr;
            }
            idx++;
        }
        else
        {
            st.pop();
        }
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

void travelnprint(node* foot, node* root, int tar)
{
    if (root == NULL)
    {
        return;
    }
    travelnprint(foot, root->left, tar);

    int compliment = tar - root->data;
    if (root->data < compliment)
    {
        if (find(foot, compliment) == true)
        {
            cout << root->data << " " << compliment << endl;
        }
    }
    travelnprint(foot, root->right, tar);
}

void display(node *root)
{
    if (root == nullptr)
    {
        return;
    }

    string str = " <- " + to_string(root->data) + " -> ";

    string left = (root->left == nullptr) ? "." : "" + to_string(root->left->data);
    string right = (root->right == nullptr) ? "." : "" + to_string(root->right->data);

    str = left + str + right;
    cout << str << endl;

    display(root->left);
    display(root->right);
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        if (x == "n")
        {
            a[i] = -1;
        }
        else
        {
            a[i] = stoi(x);
        }
    }

    node *root;
    int tar;
    cin >> tar;
    construct(root, a);
    travelnprint(root, root, tar);
}