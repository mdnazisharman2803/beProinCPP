#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"size bol lawde ";
    cin>>n;

    int arr[n];
    cout<<"array dal bhadwe ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;}
        }
      counter++;  
    }

cout<<"ye lo sorted array "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    cout<<endl;}
    return 0;
}