#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n; 
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
     int maxxx=INT_MIN;
     

    for(int i=0;i<n;i++){
        maxxx=max(maxxx,arr[i]);
        cout<<maxxx<<" ";
    }

    return 0;
}