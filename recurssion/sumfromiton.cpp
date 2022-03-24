#include<iostream>
using namespace std;

int sum(int n,int i){
if(n==i){
    return i;
}

int k= sum(n-1,i);
return k+n;

}

int main(){
    int n,i;
    cin>>n>>i;
    cout<<sum(n,i);

} 

