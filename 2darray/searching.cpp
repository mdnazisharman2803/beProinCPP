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

        int k;
        cin>>k;
        int f;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==k){

                   cout<<i<<" "<<j<<endl;
                   f=k;
                   cout<<"shi h";
                   }
               
                }
            }
    if(f!=k){
        cout<<"gand marao";
    }
}