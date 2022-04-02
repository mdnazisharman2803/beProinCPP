#include <bits/stdc++.h>
using namespace std;

vector<int> topologicalsorting(vector<int> adjm[], int vertex)
{
    vector<int> r;
    vector<int> indegreeo(vertex, 0);
    queue<int> q;

    for (int i = 0; i < vertex; i++)
    {

        for (auto x : adjm[i])
        {
            indegreeo[x]++;
        }
    }

    for (int i = 0; i < vertex; i++)
    {
        if (indegreeo[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        r.push_back(node);

        for (auto x : adjm[node])
        {
            indegreeo[x]--;
            if (indegreeo[x] == 0)
            {
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

    vector<int> ans = topologicalsorting(adjm, vertex);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}