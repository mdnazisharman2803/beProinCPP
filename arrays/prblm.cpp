#include<iostream>
using namespace std;
 
 
 int main(){
     int a,b,x,y;
     cin>>a>>b>>x>>y;
int arr[4]={a,b,x,y};
 
int n;

      for(int i=0;i<4;i++){ 
          int k= arr[i];
          if(k == 0  | k==1000){
      
        
              return 0;
          }
         }
      
       n = a*x + b*y;
      cout<<n;
 }