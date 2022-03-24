#include<iostream>
using namespace std;

    bool sorted(int arr[], int n){

     if(n==1){
         return true;
     }

    bool restarr=sorted(arr+1,n-1);

    return (arr[0]<arr[1] && restarr);  //checking if arr 0 is less than arr 1 and also rest array sorted then return true
    }

int main(){
    int arr[]={1,2,3,4,5};
    cout<<sorted(arr,5);
}