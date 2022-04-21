#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){// done
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
         else{
            s=mid+1;
        }
    }
    
    return -1;
}

int main(){
    int n;
    cout<<"enter size ";
    cin>>n;
    
    int arr[n];
    cout<<"enter array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array formed "<<endl;
    int key;
    cout<<"enter key ";
    cin>>key;
cout<<binarySearch(arr,n,key)<<endl;
   
    return 0;
}