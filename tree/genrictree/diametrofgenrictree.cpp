#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
  int data;
  vector<node *> children;

  node(int val)
  {
    this->data = val;
  }
};

void creatingtree(node *&root, int arr[], int n)
{

  stack<node *> st;

  for (int i = 0; i < n; i++)
  {

    if (arr[i] == -1)
    {
      st.pop();
    }

    else
    {
      node *newnode = new node(arr[i]);

      if (st.size() > 0)
      {

        st.top()->children.push_back(newnode);
      }

      else
      {
        root = newnode;
      }
      st.push(newnode);
    }
  }
}

int diameteroftree = 0;

int calculateheight(node *root)

{

  int deepestchildheight = -1;
  int seconddeepestchildheight = -1;

  for (node *child : root->children)
  {

    int childheight = calculateheight(child);

    if (childheight > deepestchildheight)
    {
      seconddeepestchildheight = deepestchildheight;
      deepestchildheight = childheight;
    }

    else if (childheight > seconddeepestchildheight)
    {
      seconddeepestchildheight = childheight;
    }

    
  }
  if (deepestchildheight + seconddeepestchildheight + 2 > diameteroftree)
    {
      diameteroftree = deepestchildheight + seconddeepestchildheight + 2;
    }

    deepestchildheight += 1;
    
    return deepestchildheight;
}

int main()
{

  node *root;

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  creatingtree(root, arr, n);

  int heightoftree = calculateheight(root);
 
  cout << diameteroftree;
}
