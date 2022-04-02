#include <bits/stdc++.h>
using namespace std;

void sortK(int arr[], int n, int k)
{

    priority_queue<int, vector<int>, greater<int>> minq;
    for (int i = 0; i < n; i++)
    {
        if (i <= k)
        {
            minq.push(arr[i]);
        }
        else
        {
            cout << minq.top() << endl;
            minq.pop();
            minq.push(arr[i]);
        }
    }

    while (minq.size() > 0)
    {
        cout << minq.top() << endl;
        minq.pop();
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }
    int k;
    cin >> k;
    sortK(arr, n, k);
    return 0;
}