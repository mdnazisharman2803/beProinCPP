#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int mx=INT_MIN;

    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }

     for(int i=mx;i>=1;i--){
         for(int j=0;j<n;j++){
             if(arr[j]>=i){
                 cout<<"*\t";
             }
             else{
                 cout<<"\t";
             }

         }
         cout<<endl;

     }
}