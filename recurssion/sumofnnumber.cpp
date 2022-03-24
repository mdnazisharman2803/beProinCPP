#include<iostream>
using namespace std;

int sum(int n){
if(n==0){
    return 0;
}

int k= sum(n-1);
return k+n;

}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);

} 

