#include<iostream>
using namespace std;

int main(){

    int n; 
    cin>>n;
    
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  
    int N = n;
     int idx[N];
     for(int i=0;i<N;i++){
         idx[i]=-1;
     }
    for(int i=0;i<n;i++){
            idx[a[i]]=i;
        }
        for(int i=0;i<N;i++){
            cout<<idx[i]<<" ";
        }
    
    
    return 0;
}