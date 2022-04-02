#include <bits/stdc++.h>
using namespace std;

vector<int> r;
vector<int> dfsofgraph(vector<int> adjl[], int src, vector<bool> &visited)
{
    r.push_back(src);
    visited[src] = true;

    for (auto x : adjl[src])
    {
        if (!visited[x])
        {

            dfsofgraph(adjl, x, visited);
        }
    }

    return r;
}

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

    int src;

    cin >> src;

    vector<bool> visited(vertex, false);
    vector<int> ans = dfsofgraph(adjl, src, visited);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}