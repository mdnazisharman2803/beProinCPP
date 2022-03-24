#include<iostream>
using namespace std;

void countpathmaze(int n,int m,int i,int j,string psf){
    if(i==n-1 && j==m-1){
        cout<<psf<<endl;
    }
    if(i>=n || j>=m){
        return;
    }

    countpathmaze(n,m,i+1,j,psf+'h');
    
    countpathmaze(n,m,i,j+1,psf+'v');
   
    
}

int main(){
    countpathmaze(3,3,0,0,"");
}