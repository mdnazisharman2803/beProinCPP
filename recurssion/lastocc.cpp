#include<iostream>
using namespace std;

int lastocc(int arr[],int n,int i,int key){
     if(i==n){
        return-1;
    }

    int restarr=lastocc(arr,n,i+1,key);
        if (restarr!=-1){
        return restarr;
    }
    if(arr[i]==key){
        return i;
    }
    else{return -1;}
}
int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<lastocc(arr,7,0,2);
}