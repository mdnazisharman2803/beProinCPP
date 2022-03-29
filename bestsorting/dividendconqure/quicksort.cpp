#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp =arr[i];
    arr[i]=arr[j];
   arr[j]=temp; 

}

int partitonpivotelement(int arr[],int l,int r){

   int  pivotelement=arr[r];//pivote element
   int i=l-1;

for(int j=l;j<r;j++){
    if(arr[j]<pivotelement){
        i++;
        swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}



void quickshort(int arr[], int l, int r){

    if(l>=r){
        return;
    }
    int pivot=partitonpivotelement( arr, l, r);//getting index of pivote elemnt
    quickshort(arr,l,pivot-1);
    quickshort(arr,pivot+1,r);

}

int main(){
int arr[5]={5,4,2,1,3};
quickshort(arr,0,4);

for(int m=0;m<5;m++){
    cout<<arr[m]<<" ";
}
}