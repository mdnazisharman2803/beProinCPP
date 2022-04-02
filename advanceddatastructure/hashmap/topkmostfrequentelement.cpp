///no of subarrray with sum 0

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int k;
    cin >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        int presentsize = freq.size();
        if (freq[a[i]] == 0 && presentsize == k)
        {
            break;
        }

        freq[a[i]]++;
    }

    vector<int,int> ans; //pair ka vector bnao

    map<int, int> :: iterator it;

    for ( it = freq.begin(); it!= freq.end(); it++)
    {

             if(it->second!=0){
                 ans.push_back(it->second,it->first)
             }


    }

    cout << ans;
}