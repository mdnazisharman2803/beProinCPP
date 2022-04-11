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
int height(node *root)
{
    if (root == NULL)
    {
        return -1; //return -1 when u measuring height wrt to edge and return 0 if ur measuring height wrt node
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    int totalheight = max(leftheight, rightheight) + 1;
    return totalheight;
}
/// method 1 n^2
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ld = diameter(root->left);                         //max distance betwen two node on left side
    int rd = diameter(root->right);                        //max distance betwen two node on right side
    int lr = height(root->left) + height(root->right) + 2; //max distance between left deepest and right deepest

    int diameter = max(lr, max(ld, rd));
    return diameter;
}

//method 2
class diapair
{
public:
    int ht;
    int dia;

    diapair(int ht, int dia)
    {
        this->ht = ht;
        this->dia = dia;
    }
};

diapair *diameter2(node *root)
{

    if (root == NULL)
    {
        diapair *basepair = new diapair(-1, 0);

        return basepair;
    }

    diapair *lp = diameter2(root->left);
    diapair *rp = diameter2(root->right);

    int factor = lp->ht + rp->ht + 2;
    diapair *mypair = new diapair(max(lp->ht, rp->ht) + 1, max(factor, max(lp->dia, rp->dia)));

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
    cout << "diameter of binary tree by method 1 is: " << diameter(root) << endl;
    diapair *d = diameter2(root);
    cout << "diameter of binary tree by method 2 is: " << d->dia << endl;
    // display(root);
}