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
     int minnn=INT_MAX;

    for(int i=0;i<n;i++){
        maxxx=max(maxxx,arr[i]);
        minnn=min(minnn,arr[i]);
    }
    cout<<maxxx<<" "<<minnn<<endl;
    return 0;
}