#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vertex, edges;

    cin >> vertex >> edges;

    int adjm[vertex + 1][vertex + 1];
    for (int i = 1; i <= vertex; i++)
    {
        for (int j = 1; j <= vertex; j++)
        {
            adjm[i][j] = 0;
        }
    }

    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;

        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    for (int i = 1; i <= vertex; i++)
    {

        cout << i << "-->";

        for (int j = 1; j <= vertex; j++)
        {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }


//find edge
int n,m;
cin>>n>>m;
if(adjm[n][m]==1){
cout<<"edge is present";
}
else{
cout<<"edge is not present";
}

}