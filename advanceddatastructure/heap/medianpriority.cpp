#include <iostream>
#include <queue>
using namespace std;

class MedianPriorityQueue
{
public:
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;

    void push(int val)
    {
        if (size() == 0)
        {
            left.push(val);
        }
        else if (left.size() > 0 && val <= left.top())
        {
            left.push(val);
        }
        else
        {
            right.push(val);
        }

        if (left.size() - right.size() == 2)
        {

            right.push(left.top());
            left.pop();
        }
        else if (right.size() - left.size() == 2)
        {
            left.push(right.top());
            right.pop();
        }
    }

    int pop()
    {
        if (size() == 0)
        {
            cout << "Underflow" << endl;
            return -1;
        }
        else if (left.size() >= right.size())
        {
            int topp = left.top();
            left.pop();
            return topp;
        }
        else
        {
            int topp = right.top();
            right.pop();
            return topp;
        }
    }

    int top()
    {
        if (size() == 0)
        {
            cout << "Underflow" << endl;
            return -1;
        }
        else if (left.size() >= right.size())
        {
            return left.top();
        }
        else
        {
            return right.top();
        }
    }

    int size()
    {
        return left.size() + right.size();
    }
};

int main()
{
    MedianPriorityQueue pq;

    string str;
    cin >> str;
    while (str != "quit")
    {
        if (str == "add")
        {
            int val;
            cin >> val;
            pq.push(val);
        }
        else if (str == "remove")
        {
            int val = pq.pop();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (str == "peek")
        {
            int val = pq.top();
            if (val != -1)
            {
                cout << val << endl;
            }
        }
        else if (str == "size")
        {
            cout << pq.size() << endl;
        }
        cin >> str;
    }

    return 0;
}