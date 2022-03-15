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

    int f=0,g=0,direction=0;
    int tne=n*m;
    int count=0;
    while(count<tne){
        direction= (direction+arr[f][g])%4;
        count++;
        if(direction==0){
           g++;
           if(g==m){
               g--;
               break;
           }
        }
         else if(direction==1){
           f++;
           if(f==n){
               f--;
               break;
            }
        }
         else if(direction==2){
           g--;
           if(g==-1){
               g++;
               break;
            }
        }
         else if(direction==3){
           f--;
           if(f==-1){
               f++;
               break;
            }
        }
    
    }
     
     cout<<f<<" "<<g;

}