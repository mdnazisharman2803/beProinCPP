#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int currsum=0;
  int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxSum=max(maxSum,currsum);
    }
    return maxSum;
}

int main(){

    int n; 
    cout<<"array size ";
    cin>>n;
    
    int arr[n];
    cout<<"array elements dal ";   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int wrapsum;
   int nonwrapsum;
   int totalsum=0;

   nonwrapsum = kadane(arr,n);
   for(int i=0;i<n;i++){
       totalsum+=arr[i];
       arr[i]=-arr[i];
   }
   
wrapsum = totalsum  - -1*kadane(arr,n);
cout<<max(wrapsum,nonwrapsum)<<endl;

    return 0;
}