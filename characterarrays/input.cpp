#include<iostream>
using namespace std;

    int main(){

    char arr[100]="apple";
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    int l;
    cin>>l;
    char arra[l+1];
    cin>>arra;
    cout<<arra<<endl;
    cout<<arra[2];
       
        
}