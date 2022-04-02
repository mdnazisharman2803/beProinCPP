#include <bits/stdc++.h>
using namespace std;
class Pair
{
public:
    int li;
    int di;
    int data;

    Pair(int li, int di, int data)
    {
        this->li = li;
        this->di = di;
        this->data = data;
    }
};
class FunctorCompare
{
public:
    bool operator()(Pair a, Pair b)
    {
        return a.data > b.data;
    }
};

vector<int> mergeKSortedLists(vector<vector<int>> &lists)
{

    vector<int> rv;

    priority_queue<Pair, vector<Pair>, FunctorCompare> pq;

    for (int i = 0; i < lists.size(); i++)
    {
        Pair p=new Pair(i, 0, lists[i][0]);
        pq.push(p);
    }
    while (pq.size() > 0)
    {
        Pair p = pq.top();
        rv.push_back(p.data);
        pq.pop();

        p.di++;

        if (p.di < lists[p.li].size())
        {
            p.data = lists[p.li][p.di];
            pq.push(p);
        }
    }

    return rv;
}

int main()
{
    int k;
    cin >> k;
    vector<vector<int>> lists;
    for (int i = 0; i < k; i++)
    {
        vector<int> list;

        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int data;
            cin >> data;
            list.push_back(data);
        }

        lists.push_back(list);
    }

    vector<int> mlist = mergeKSortedLists(lists);
    for (int val : mlist)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}