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

class ppair{
public:
   Node* root;
   int state;

   ppair(Node* root,int state){
      this->root=root;
      this->state=state; 
   } 

};

void iterativePreAndPostOrder(Node *root)
{

    stack<ppair*>stk;

    stk.push(new ppair(root,-1));
    string pre = "";
    string pos = "";
    while (stk.size() > 0)
    {
        ppair* topp= stk.top();
        
        if (topp->state == -1)
        {
            pre += to_string(topp->root->data) + " ";
            topp->state++;
                    }
        else if (topp->state==topp->root->children.size())
        {
            pos += to_string(topp->root->data) + " ";
            stk.pop();
        }
        else
        {
            ppair* child=new ppair(topp->root->children[topp->state],-1);
           stk.push(child);
             topp->state++;
          
            
           
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