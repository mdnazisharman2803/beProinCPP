#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data = 0;
  Node* left = nullptr;
  Node* right = nullptr;
  Node(int data)
  {
    this->data = data;
  }
};

class Pair {
public:
  Node* node = nullptr;
  int state = 0;

  Pair(Node* node, int state) {
    this->node = node;
    this->state = state;
  }
};

int idx = 0;
Node* constructTree(vector<int>& arr)
{

  if (idx == arr.size() || arr[idx] == -1)
  {
    idx++;
    return nullptr;
  }
  Node* node = new Node(arr[idx++]);
  node->left = constructTree(arr);
  node->right = constructTree(arr);
  return node;
}


void display(Node* node)
{
  if (node == nullptr)
    return;
  string str = "";
  str += node->left != nullptr ? to_string(node->left->data) : ".";
  str += " <- " + to_string(node->data) + " -> ";
  str += node->right != nullptr ? to_string(node->right->data) : ".";
  cout << str << endl;

  display(node->left);
  display(node->right);
}



int height(Node* node)
{
  return node == nullptr ? -1 : max(height(node->left), height(node->right)) + 1;
}

class balpair{
public:
int ht;
bool isbal;
balpair(bool isbal,int ht){
    this->isbal=isbal;
    this->ht=ht;
}
};



balpair* isbalance(Node* node)
{
  if (node == nullptr)
  {
    balpair* basereult=new balpair(true,0);
    return basereult;
  }

  balpair* l = isbalance(node->left);
  balpair* r= isbalance(node->right);

  balpair* mypair=new balpair( abs(l->ht-r->ht)<=1 && l->isbal==true && r->isbal==true? true: false, max(l->ht, r->ht) + 1);

  
  return mypair;

}


int main() {
  int n;
  cin >> n;

  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    if (tmp == "n") {
      arr[i] = -1;
    } else {
      arr[i] = stoi(tmp);
    }
  }


  Node* root = constructTree(arr);

  balpair* r = isbalance(root);
  if (r->isbal == 1)
    cout << "true";
  else
    cout << "false";



}