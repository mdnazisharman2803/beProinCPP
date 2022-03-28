#include<iostream>
using namespace std;

bool issafe(int**arr,int x,int y,int n){
    if(x<n&&y<n&&arr[x][y]==0){
        return true;
    }
    return false;

}

void ratinmaze(int**arr,int x,int y,int n,string asf){
    if(x==n-1&&y==n-1&&arr[x][y]==0){
       cout<<asf;
    }
    if(issafe(arr,x,y,n)){
    ratinmaze(arr,x+1,y,n,asf+'r');
    
   
    ratinmaze(arr,x, y+1,n,asf+'d');
    }
    
    
   else{
     asf = ""; //backtrack
      return;}
}

int main(){
    int n;
    cin>>n;

    int**arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>arr[i][j];
       }
    }
string asf;
      ratinmaze(arr,0, 0,n,"");
      
}