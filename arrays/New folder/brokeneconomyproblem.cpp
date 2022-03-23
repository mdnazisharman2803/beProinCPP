#include<iostream>
using namespace std;
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
    int s =0;
    int e =n-1;
    int ceil =-1;
    int floor =-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            ceil=key;
            floor=key;
            break;
        }
        else if(arr[mid]<key){
            floor=arr[mid];
            s=mid+1;
        }
        else{
            ceil=arr[mid];
            e=mid-1;
        }
         
    }
    cout<<ceil<<" "<<floor;

   
    return 0;
}