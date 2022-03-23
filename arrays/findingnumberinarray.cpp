#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size ";
    cin>>n;
    int arr[n];
    cout<<"elents ";
       for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
    int k;
    cout<<"value of k ";
    cin>>k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<i;
            break;
        }
       
        if(i==n-1){

        cout<<-1;}
    }
}