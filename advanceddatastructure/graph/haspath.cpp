#include<bits/stdc++.h>
using namespace std;
class Edge {
public:
  int src;
  int nbr;
  int wt;

  Edge(int src, int nbr, int wt) {
    this->src = src;
    this->nbr = nbr;
    this->wt = wt;
  }
};

bool hasPath(vector<Edge>graph[], int  src, int dest, vector<bool> vis) {
  if (src == dest)return true;
  vis[src] = true;
  for (Edge ed : graph[src]) {
    if (vis[ed.nbr] == false){
    bool hasnbrpath= hasPath(graph, ed.nbr, dest, vis);
    if(hasnbrpath==true)
      return true;
    }
  }
  return false;
}

int main() {
  int vtces;
  cin >> vtces;
  vector<Edge>graph[vtces];

  int edges;
  cin >> edges;
  for (int i = 0; i < edges; i++) {
    int v1 ;
    int v2 ;
    int wt ;
    cin >> v1 >> v2 >> wt;
    graph[v1].push_back( Edge(v1, v2, wt));
    graph[v2].push_back( Edge(v2, v1, wt));
  }

  int src;
  cin >> src;
  int dest;
  cin >> dest;

// making a boolean vector of size vertix and intitialisingsing all at false
  vector<bool> vis(vtces, false);
  if (hasPath(graph, src, dest, vis)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;

  }
}




