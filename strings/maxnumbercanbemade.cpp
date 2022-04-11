#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // we can use sorting function but in decreasing order in a way to acheive maximum number
    string s="15464544626594416239";
    sort(s.begin(),s.end());// smallest number 
    cout<<s<<endl;
    sort(s.begin(),s.end(),greater<int>()); // max number
    cout<<s<<endl;
}