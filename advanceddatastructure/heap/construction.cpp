#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
  vector<int>arr;
  int n;
  cin >> n;
  for (int i = 0 ; i < n; i++) {
    int data;
    cin >> data;
    arr.push_back(data);
  }
  
  // max heap
  priority_queue<int,vector<int>> maxq;
  for (int i = 0 ; i < n; i++) {
    
        maxq.push(arr[i]);
  }

  while(maxq.size()>0){
      cout<<maxq.top()<<" ";
      maxq.pop();
  }

  cout<<endl;

  // max heap
  priority_queue<int,vector<int>,greater<int>> minq;
  for (int val:arr) {
    
        minq.push(val);
  }

  while(minq.size()>0){
      cout<<minq.top()<<" ";
      minq.pop();
  }

  return 0;

}