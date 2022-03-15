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
      int mn=0;
      
      for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                     if(arr[i][j]<arr[j][mn]){
                      mn=j;
                      }
              }
              bool flag=true;
              for(int k=0;k<n;k++){
                     if(arr[k][mn]>arr[i][mn])
                      {flag=false;
                      break;
                      }
              }
                     if(flag==true){
                     cout<<arr[i][mn]<<endl;
                  
                      return 0;
                      }

                
     
      }
 cout<<"invalid";
}