#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vertex, edges;

    cin >> vertex >> edges;

    vector<int> adjl[vertex + 1];

    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    for (int i = 1; i <= vertex; i++)
    {

        cout << i << "-->";

        for (int j = 0; j < adjl[i].size(); j++)
        {
            cout << adjl[i][j] << " ";
        }
        cout << endl;
    }

    //find edge
    int n, m;
    cin >> n >> m;
    if (adjl[n][m])
    {
        cout << "edge is present";
    }
    else
    {
        cout << "edge is not present";
    }
}