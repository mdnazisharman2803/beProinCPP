#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
        return a;
}
int main(){
    cout<<gcd(12,4)<<endl;
    cout<<gcd(18,12)<<endl;
    //lcm
    int lcm=12*4/gcd(12,4);
    cout<<lcm<<endl;
     int lcm2=12*18/gcd(12,18);
    cout<<lcm2<<endl;
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;

    //inbuilt function algorithm
    cout<<__gcd(12,18)<<endl;
    
}