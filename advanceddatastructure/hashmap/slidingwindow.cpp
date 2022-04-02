///no of subarrray with sum 0

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int k;
    cin>>k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s = 0;
    int ans = INT_MAX;
    for (int i = 0; i < k; i++)
    {
        s += a[i];
    }

    ans = min(ans, s);

    for (int i = 1; i < n - k + 1; i++)
    {

        s -= a[i - 1];
        s += a[i + k - 1];
        ans = min(ans, s);
    }

    cout << ans;
}