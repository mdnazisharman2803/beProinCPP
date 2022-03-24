#include<iostream>
using namespace std;

void dec(int n){    // base condition for inc as well as dec can be written as
                    // if(n==1){cout<<"1"<<endl; return;//}
    if(n==0){
        return;
    }
     cout<<n<<endl;
    dec(n-1);
   
    
}

void inc(int n){    // base condition for inc as well as dec can be written as
                    // if(n==1){cout<<"1"<<endl; return;//}
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
    
}

int main(){
    int n;
    cin>>n;
    dec(n);
    inc(n);
}