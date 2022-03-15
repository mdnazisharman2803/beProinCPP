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
        int r=0;
        int c=m-1;
        bool flag= false;
        while(r < n and c>=0){
            if(arr[r][c]==k){
                  flag=true;
            }
            if(arr[r][c]>k){
                  c--;
            }
            else{
                r++;
            }

        }
        if(flag){
            cout<<"element found";
        }
        else{
          cout<<"-1";
           }
}