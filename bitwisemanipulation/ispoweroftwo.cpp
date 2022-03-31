#include<iostream>
using namespace std;

bool ispower2(int n){
      return (n && !(n & n-1));  // used extra n because for 0 we cant make n-1 so if and with 0 will return 0 means not divisible by 2 
}

/* if we observe n in binary format , n-1 can be formed after flipping from the right most bit of n
and so now if we observe and 
now 
n& n-1 has same bit as n except the right most set bit. example
 n=8= 1000
 n-1= 7= 0111

 1000&0111 =0000 which is similar to n as only right most bit differ..
 we can conclude all number which is  power of 2 have only one set bit 
 so if it is and with n-1 will give 0. */

int main(){
    cout<<ispower2(16)<<endl;
    cout<<ispower2(3)<<endl;

}
