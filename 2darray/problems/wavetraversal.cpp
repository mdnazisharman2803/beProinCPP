#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
       { cin>>arr[i][j];}
    }

        int j=0;
        while(j<m){

               if(j%2==0){
                   for(int i=0;i<n;i++){
                       cout<<arr[i][j]<<" ";
                   }
               }
               else{
                   for(int i=n-1;i>-1;i--){
                        cout<<arr[i][j]<<" ";
                   }
               }
            j++;
        }
}