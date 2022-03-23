#include<iostream>
using namespace std;
void reverse(int arr[], int left, int right){
     while(left<right){
         int temp= arr[left];
         arr[left]=arr[right];
         arr[right]=temp;
         left++;
         right--;
     }
}


void rotate(int arr[], int n, int k){
   k=k%n;
   reverse(arr,0,n-1);
   reverse(arr,0,k-1);
   reverse(arr,k,n-1);

    
}

void display(int arr[], int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}