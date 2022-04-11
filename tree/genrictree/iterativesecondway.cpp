#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    vector<Node *> children;
};

Node *construct(vector<int> &arr)
{
    Node *root = nullptr;

    stack<Node *> st;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == -1)
        {
            st.pop();
        }
        else
        {
            Node *t = new Node();
            t->data = arr[i];

            if (st.size() > 0)
            {
                st.top()->children.push_back(t);
            }
            else
            {
                root = t;
            }
            st.push(t);
        }
    }
    return root;
}

void iterativePreAndPostOrder(Node *root)
{

    stack<pair<Node *, int>> stk;

    stk.push({root, -1});
    string pre = "";
    string pos = "";
    while (stk.size() > 0)
    {
        pair<Node *, int> top = stk.top();
     
        if (top.second == -1)
        {
            pre += to_string(top.first->data) + " ";
            top.second += 1;
         
        }
        else if (top.second == top.first->children.size())
        {
            pos += to_string(top.first->data) + " ";
            stk.pop();
        }
        else
        {
            pair<Node *, int> child(top.first->children[top.second], -1);
             top.second += 1;
            
            stk.push(child);
           
        }
    }
    cout << pre << endl;
    cout << pos;
}

int main()
{
    int n, x;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    Node *root = construct(arr);
    iterativePreAndPostOrder(root);
}