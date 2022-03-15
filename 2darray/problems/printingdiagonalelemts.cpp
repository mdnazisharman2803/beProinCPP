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
              while(gap<n)
              {   for(int j=0;j<n;j++){
                      
                      cout<<arr[gap][j]<<" ";
                      gap++;
                    }
                        
                }
              
                
                
}
              
                               
       
    
