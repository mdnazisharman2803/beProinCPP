#include<iostream>
using namespace std;

int main(){

    int n; 
    cout<<"array size ";
    cin>>n;
    
    int arr[n];
    cout<<"array elements dal ";   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
    int crr=0;
    for(int i=0;i<n;i++){
        crr=0;
        for(int j=i;j<n;j++){
            crr += arr[j];
            cout<<crr<<endl;
        }
    }

    return 0;
}