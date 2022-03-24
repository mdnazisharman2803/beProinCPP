#include<iostream>
using namespace std;

void decinc(int n){
    if(n==0){
        return;
    }

    cout<<n<<endl;
    
    decinc(n-1);
    
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    decinc(n);
}