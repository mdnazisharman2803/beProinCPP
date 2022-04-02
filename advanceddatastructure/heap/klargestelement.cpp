#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int findKthLargest(vector<int> const &arr, int k)
{

    priority_queue<int, vector<int>, greater<int>> minq;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i < k)
        {
            minq.push(arr[i]);
        }
        else
        {
            if (arr[i] > minq.top())
            {
                minq.pop();
                minq.push(arr[i]);
            }
        }
    }

    return minq.top();
    ;
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr.push_back(data);
    }
    int k;
    cin >> k;
    for (int i = k; i > 0; i--)
        cout << findKthLargest(arr, i) << endl;

    return 0;
}