#include <bits/stdc++.h>
using namespace std;

class graph
{

    int src;
    int nbr;
    int wt;

    graph(int src, int nbr, int wt)
    {

        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

int main()
{
    int vertex, edges;

    cin >> vertex >> edges;

    vector<graph> adjl[vertex + 1];

    for (int i = 0; i < edges; i++)
    {
        int x, y,z;
        cin >> x >> y>>z;

        adjl[x].push_back(x,y,z);
        adjl[y].push_back(y,x,z);
    }

   
}