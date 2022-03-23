#include<iostream>
#include<cmath>
using namespace std;

int decitobinary(int f){
    int ans=0;
    int power =1;
    while(f!=0){
        int r=f%2;
        f /= 2;
        ans +=(r*power);
        power *= 10;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    int subset= pow(2,n);
    int div = pow(10,n-1);
    for(int i=0;i<subset;i++){
        int bn= decitobinary(i);
        
         for(int j=0;j<n;j++){
             int q=bn/div;
             int r=bn%div;

            if(q==0){
            cout<<"-\t";
            }
            else{
            cout<<arr[j]<<" \t";
            }
     bn =r;
     div/=10;


    }
    cout<<endl;

    }
}