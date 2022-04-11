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
vector<int> inorderfill;
void travelnfill(node *root)
{
    if (root == NULL)
    {
        return;
    }
    travelnfill(root->left);
    inorderfill.push_back(root->data);
    travelnfill(root->right);
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
    construct(root, a);
    int data;
    cin >> data;
    travelnfill(root);
    int li = 0;
    int ri = inorderfill.size() - 1;
    while (li < ri)
    {
        int left = inorderfill[li];
        int right = inorderfill[ri];

        if (left + right < data)
        {
            li++;
        }
        else if (left + right > data)
        {
            ri--;
        }
        else
        {
            cout << left << " " << right << endl;
            li++;
            ri--;
        }
    }
}