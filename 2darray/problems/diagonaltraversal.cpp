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
      
       int gap= 0;
        int k=0;
              for(int i=0;i<n;i++){
                  int f=0;
                  for(int j=gap;j<n;j++){
                      
                      cout<<arr[f][j]<<" ";
                        f++;
                    }
                          gap++;
                }
              
                
                
}
              
                               
       
    
