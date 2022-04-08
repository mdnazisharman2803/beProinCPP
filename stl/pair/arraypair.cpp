#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    pair<int,int>parr[n]; // two array of int type with name parr and size n is declared

/* mannually giving value for n=3, at index (0,1,2)f array 1 and array 2 
parr[0]={1,2};
parr[1]={2,3};
parr[2]={3,4};
*/
// user giving value
    for(int i=0;i<n;i++){
        cin>>parr[i].first;
        cin>>parr[i].second;
    }

    for(int i=0;i<n;i++){
        cout<<parr[i].first<<" ";
      
       cout<<parr[i].second<<" "<<endl;
           
    }
}
