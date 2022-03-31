#include<iostream>
using namespace std;
// logic is that xor gives 1 if other two input have 0 or 1 and gives 0 if other bits of two inputs are 11 or 00, so if we xor of similar number it will cancel to  hence all repeated elements will be dead only non repeated one will be printed.
     // after doing xor all duplicates will dead and output will be uniq no.1 xor unique no.2
     // so after looking result  we  can see the right most set bit of result then we will xor all number having same right most bit set position by doing so we will gwt any one of unique number 
     // to get unique two ..we will xor unique 1 to result of step 1.
int setBit(int n, int pos){
    return((n&(1<<pos))!=0);
}
void unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
   int tempxor=xorsum;
   int setbit=0;
   int pos=0;
   while(setbit!=1){
          setbit=xorsum &1;
          pos++;
          xorsum=xorsum>>1;
   }
   int newxor=0;
   for(int i=0;i<n;i++){
       if(setBit(arr[i],(pos-1))){
           newxor=newxor^arr[i];
       }
   }
int lund=tempxor^newxor;
   cout<<newxor<<endl; 
   cout<<lund<<endl;
 
}

int main(){
  int arr[]={1,2,3,5,7,1,2,3};
  unique(arr,8);
  
}