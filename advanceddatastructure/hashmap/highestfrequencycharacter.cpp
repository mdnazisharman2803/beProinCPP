#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;

    unordered_map<char, int> um;

    /*
    // first way of printing frequency of elemts corresponding to character
    for(int i=0;i<str.length();i++){
    char ch=str[i];
    //we can use this to check how much frequency is present simply updating
    um[ch]++;
}
 for (auto itr = um.begin(); itr != um.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
*/

 // second way of printing frequency of elemts corresponding to character

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (um.find(ch) == um.end())
        {
            // cout << "not found" << endl;

            um.insert({ch, 1});
        }
        else
        {
            // cout << "found" << endl;

            auto pr = um.find(ch);
            int of = pr->second;
            int nf = of + 1;
            //update
            um[ch]=nf;
        }
    }

int maxcount=0;
char ch;

for(pair<char,int>p:um){
if(maxcount<p.second){
    maxcount=p.second;
    ch=p.first;
}
}
    cout<<"character is: "<<ch<<" "<<"its count is: "<<maxcount;
}