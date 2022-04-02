#include <bits/stdc++.h>
using namespace std;

vector<int> data;

int _size()
{
    return data.size();
}
void downheapify(int pi)
{

    int mini = pi;
    int li = pi * 2 + 1;
    if (li < data.size() && data[li] < data[mini])
    {
        mini = li;
    }
    int ri = pi * 2 + 2;
    if (ri < data.size() && data[ri] < data[mini])
    {
        mini = ri;
    }
    if (mini != pi)
    {
        swap(data[pi], data[mini]);
        downheapify(mini);
    }
}
void add(int val)
{
    data.push_back(val);
   for(int i= data.size()/2-1;i>=0;i--){
       downheapify(i);
   }
}

int _remove()
{
    if (_size() == 0)
    {
        cout << "Underflow" << endl;
        return -1;
    }
    swap(data[0], data[data.size() - 1]);
    int val = data[data.size() - 1];
    data.pop_back();
    downheapify(0);
    return val;
}

int peek()
{
    if (_size() == 0)
    {
        cout << "Underflow" << endl;
        return -1;
    }

    return data.at(0);
}

int main()
{

    while (1)
    {
        string str;
        getline(cin, str);
        if (str[0] == 'a')
        {
            string num = str.substr(4, str.length());
            int val = stoi(num);
            add(val);
        }
        else if (str[0] == 'r')
        {
            int val = _remove();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (str[0] == 'p')
        {
            int val = peek();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else
            break;
    }
}