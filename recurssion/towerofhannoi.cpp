#include<iostream>
#include<algorithm>
using namespace std;

void towerofhannoi(int n, char source, char destination,char helper){
    if(n==0){
        return;
    }
       towerofhannoi(n-1,source,helper,destination);  
       cout<<"move from "<<source<<" to "<<destination<<endl;
       towerofhannoi(n-1,helper,destination,source);
}

int main(){
    towerofhannoi(3,'A','C','B');
}