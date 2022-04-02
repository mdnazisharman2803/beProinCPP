#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<string, int> um;

    um["india"] = 135;
    um["us"] = 65;
    um["uk"] = 55;
    um["china"] = 185;
  
    for (pair<string, int> p : um)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;

    // insert or put
    um.insert({"qatar", 10});

    //update
    um["india"]=650;

    // print new method
    for (auto itr = um.begin(); itr != um.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    // find

    string key = "india";

    if (um.find(key) == um.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    //val getting

    if (um.find(key) == um.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
        auto pr = um.find(key);
        cout << "key is: " << pr->first << endl;
        cout << "val is: " << pr->second << endl;
    }

    //size

    cout << "current size: " << um.size() << endl;

    //erase
    um.erase(key);
    cout << "new size: " << um.size() << endl;
}
