#include <bits/stdc++.h>
using namespace std;

vector<int> bfsofgraph(vector<int> adjl[], int vertex, int src)
{
    vector<int> r;
    queue<int> q;
    q.push(src);
    vector<bool> visited(vertex, false);
    visited[src] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        r.push_back(node);

        for (auto x : adjl[node])
        {
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
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

    vector<int> ans = bfsofgraph(adjl, vertex, src);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}