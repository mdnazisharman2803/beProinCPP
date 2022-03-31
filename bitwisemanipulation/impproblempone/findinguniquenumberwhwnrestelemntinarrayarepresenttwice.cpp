#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int xorsum=0;

    // logic is that xor gives 1 if other two input have 0 or 1 and gives 0 if other bits of two inputs are 11 or 00, so if we xor of similar number it will cancel to  hence all repeated elements will be dead only non repeated one will be printed.

    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main(){
  int arr[]={1,2,3,4,1,2,3};
  cout<<unique(arr,7)<<endl;
  
}