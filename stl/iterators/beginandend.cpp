#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<int>arr){
    cout<<"current size: "<<arr.size()<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){

    vector<int> arr;
    int n; // lets say vector of size n
    cin>>n;

    for(int i=0;i<n;i++){
        int x;//  elemnt to be added at end .
        cin>>x;    
    arr.push_back(x);
    }
      printvec(arr);

    vector<int> ::iterator it=arr.begin(); // syntax is simple just put container of which iterator to be made then :: then iterator then name of iterator then finally name of vector here . begin so its pointing to elemnt at 0th positon and arr.end points after alll elements at n
  cout<<(*it)<<endl; // acccesing the elemnt at 0 index
  cout<<(*it+1)<<endl; // acccesing the elemnt at 1 index

  // printing using iterator
  for( it=arr.begin();it<arr.end();it++){
    cout<<(*it)<<" ";
}

}
