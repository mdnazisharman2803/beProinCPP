#include <bits/stdc++.h>
using namespace std;
class pii
{
public:
    int data;
    int whicharray;

    pii(int data, int whicharray)
    {
        this->data = data;
        this->whicharray = whicharray;
    }
};

int main()
{
    int k;
    cin >> k;
    vector<vector<int>> a;
    for (int i = 0; i < k; i++)
    {
        vector<int> a;

        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int data;
            cin >> data;
            a.push_back(data);
        }

        a.push_back(a);
    }

    vector<int> idx(k, 0);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    for (int i = 0, i < k; i++)
    {
        pq.push(new pii(a[i][0], i));
    }

    vector<int> ans;
    while (!pq.empty())
    {
        pii x = pq.top();
        pq.pop();
        ans.push_back(x.data);

        if (idx[x.whicharray] + 1 < a[x.whicharray].size())
        {
            pq.push(new pii(a[x.whicharray][idx[x.whicharray] + 1], x.whicharray));
            idx[x.whicharray] += 1;
        }
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}