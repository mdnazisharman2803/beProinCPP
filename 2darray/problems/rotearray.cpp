#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cin>>arr[i][j];
         }
    }
          //transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            //swap
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
         //rotate
         //column swap
         int s=0;
         int e=m-1;
         while(s<e){
              for(int i=0;i<n;i++){
                  int temp=arr[i][s];
                  arr[i][s]=arr[i][e];
                  arr[i][e]=temp;
                  }
            s++;
            e--;
         }
    

    
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

}