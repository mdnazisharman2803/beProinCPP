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

class itpair
{
public:
    node *root;
    int state=0;

    itpair(node *root, int state)
    {
        this->root = root;
        this->state = state;
    }
};

node *getnextfromnormalinorder(stack<itpair *> ls)
{

    while (ls.size() > 0)
    {

        itpair *topp = ls.top();

        if (topp->state == 0)
        {

            if (topp->root->left != NULL)
            {
                ls.push(new itpair(topp->root->left, 0));
            }
            topp->state++;
        }
        else if (topp->state == 1)
        {

            if (topp->root->right != NULL)
            {
                ls.push(new itpair(topp->root->right, 0));
            }

            topp->state++;
            return topp->root;
        }
        else
        {

            ls.pop();
        }
    }

    return NULL;
}

node *getnextfromreverseinorder(stack<itpair *> rs)
{

    while (rs.size() > 0)
    {

        itpair *topp = rs.top();

        if (topp->state == 0)
        {
            if (topp->root->right != NULL)
            {
                rs.push(new itpair(topp->root->right, 0));
            }

            topp->state++;
        }
        else if (topp->state == 1)
        {

            if (topp->root->left != NULL)
            {
                rs.push(new itpair(topp->root->left, 0));
            }

            topp->state++;
            return topp->root;
        }
        else
        {

            rs.pop();
        }
    }

    return NULL;
}

void bestapproach(node *root, int tar)
{
    if(root==NULL){
        return;
    }
    stack<itpair *> ls;
    stack<itpair *> rs;

    ls.push(new itpair(root, 0));
    rs.push(new itpair(root, 0));

    node *left = getnextfromnormalinorder(ls);
    node *right = getnextfromreverseinorder(rs);

    while (left->data < right->data)
    {

        if (left->data + right->data < tar)
        {
            left = getnextfromnormalinorder(ls);
        }
        else if (left->data + right->data > tar)
        {
            right = getnextfromreverseinorder(rs);
        }
        else
        {
            cout << left->data << " " << right->data << endl;
            left = getnextfromnormalinorder(ls);
            right = getnextfromreverseinorder(rs);
        }
    }
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
    int tar;
    cin >> tar;
    bestapproach(root, tar);
}