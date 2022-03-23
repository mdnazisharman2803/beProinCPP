#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n; 
    cout<<"array size ";
    cin>>n;
    
    int arr[n];
    cout<<"array elements dal ";   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  int currsum=0;
  int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxSum=max(maxSum,currsum);
    }

  
cout<<maxSum;
    return 0;
}