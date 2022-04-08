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
        printvec(arr); // wanna check at each stage how array form.
    arr.push_back(x);
    }
    printvec(arr);
}
