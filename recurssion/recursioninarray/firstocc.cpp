#include<iostream>
using namespace std;

 int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    

  
  if(arr[i]==key){
      return i;
      }
firstocc(arr,n,i+1,key);
  }


int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int j=0;j<n;j++){     
          cin>>arr[j];
          }
cout<<firstocc(arr,n,0,key);
}