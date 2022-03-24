#include<iostream>

#include<vector>

using namespace std;
bool issafe(int**arr,int n,int m,int r,int c){
    if(r<n && c<m && arr[r][c]==0){
        return true;
    }
    return false;
}
void floodfill(int**arr,int n,int m, int r, int c, string psf) {
if(r==n-1 && c ==m-1){
    cout<<psf;
    return;
}
 if(issafe(arr,n,m,r,c)){
     arr[r][c]=0;
floodfill(arr,r+1,c,n,m,psf+"d");

floodfill(arr,r,c+1,n,m,psf+"r");
 }
arr[r][c]=1;
return;
}

int main() {
  int n, m;
  cin >> n >> m;
  int p=m;

  int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

  floodfill(arr,n,m, 0, 0, "");
}