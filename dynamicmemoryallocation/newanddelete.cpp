#include<iostream>
using namespace std;

int main(){
    
    int a=10; // variable allocated memory in stack and value is stored in stack

    int *p=new int(); // new is used to allocate memory in heap therefore wwe have to use pointer to store it

    *p=10; // p will not be directly stored in the heap, p will be stored in stack p will point to memory adress where the memory was allocated to store integer
             // p is pointer pointing to memory address in heap
             // memory adress was then stored with value 10
             // we can access from where ever we want it act like global variable
    
    cout<<p<<endl;   // adress in heap
    cout<<*p<<endl;  // value stored in  heap
    delete(p);   // used to de allocate memory in heap but the pointer will still pointing to memory address known as dangling pointer that is pointing to memory allocation where no value is stored

    p=new int [4]; // this is re used and pointer will point to the array the first element or at zero index. we can change size at run time.

    delete[]p; // delete the memory allocated to the block of array
    p=NULL;   // to remove pointer p
     int n;
     cin>>n;
    int*arr;
   arr= new int [n];

    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
     for (int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}