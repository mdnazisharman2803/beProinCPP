#include<iostream>
#include<climits>
using namespace std;

int maxOfarray(int arr[],int idx,int n){
    if(idx==n-1){
    return arr[idx];
}

  
int mx=maxOfarray(arr,idx+1,n);
if(mx >  arr[idx]){
    return mx;
}
    else{
        return   arr[idx];
    } 
   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

  int m=  maxOfarray(arr,0,n);
    cout<<m;
}