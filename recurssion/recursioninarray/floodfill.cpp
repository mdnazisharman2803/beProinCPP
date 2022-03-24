#include<iostream>

#include<vector>

using namespace std;
// asf -> answer so far
void floodfill(vector<vector<int>> maze,int n,int m, int r, int c, string psf,vector < vector < bool >> visited) {
if(r<0 || c<0 || r== n || c==m || maze[r][c]==1 || visited[r][c]==true){
    return;
}
if(r==n-1 && c ==m-1){
    cout<<psf;
    return;
}
visited[r][c]=true;
floodfill(maze,r-1,c,n,m,psf+"t",visited);
floodfill(maze,r,c-1,n,m,psf+"l",visited);
floodfill(maze,r+1,c,n,m,psf+"d",visited);
floodfill(maze,r,c+1,n,m,psf+"r",visited);
visited[r][c]=false;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector < vector < int >> arr(n, vector < int > (m));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];
 vector < vector < bool >> visited(n, vector < bool > (m));

  floodfill(arr,n,m, 0, 0, "",visited);
}