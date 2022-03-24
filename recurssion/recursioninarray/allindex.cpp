#include<iostream>
using namespace std;

int lastocc(int arr[],int n,int i,int fsf,int key){
     if(i==n-1){
     return int ans[fsf];
    }
if(arr[i]==key){
   int ans[]= lastocc(arr, n, i+1, fsf+1, key);
   ans[fsf]=i;
   return ans;
}
   else{
    int ans[]=lastocc( arr, n,i+1,fsf, key);
    return ans;
   } 
}
int main(){
    int arr[]={4,5,2,5,1,2,5,2,7};
    cout<<lastocc(arr,9,0,0,5);
}