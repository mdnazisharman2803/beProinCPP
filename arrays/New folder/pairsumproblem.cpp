#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int k){
    int low=0;
    int high=n;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
    }
                 }
                 return false;
}


int main()
   {
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];

       for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    
    cout<<pairsum(arr,n,k)<<endl;
   
    }