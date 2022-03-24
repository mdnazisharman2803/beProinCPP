#include<iostream>
#include<algorithm>
using namespace std;

int friendspairing(int n){
          if(n==0 || n==1 ||n==2){
              return n;
          }
        return friendspairing(n-1) + friendspairing(n-2)*(n-1);  
}
int main(){
cout<<friendspairing(3);
}