#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
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
cout<<linearSearch(arr,n,key)<<endl;
   
    return 0;
}