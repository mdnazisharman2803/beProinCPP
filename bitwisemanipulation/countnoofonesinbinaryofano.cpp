#include<iostream>
using namespace std;

int numberofones(int n){
      int count =0;
      while(n){
          n = n & (n-1);
          count++;
      }
      return count;
}

/* if we observe n in binary format , n-1 can be formed after flipping from the right most bit of n
and so now if we observe and 
now 
n& n-1 has same bit as n except the right most set bit. example
 n=19= 01011
 n-1= 18=01010
 n& n-1
 01011&01010
 = 01010
 we can observe that in n and n&n-1 , n have only one bit difference
 which is its right most set bit. 
 so we can repeat process till finally all bit becomes 0 .
 so our nnew n will be 18
 n=18=01010
 n-1=17=01001
n= n&n-1
01010&01001
=01000
n=16=01000
n-1=15 = 00111
n= n&n-1
01000&00111
00000

so we need 3 iteration to clear all bit so there was 3 set bit number in real number
*/

 
int main(){
    cout<<numberofones(19)<<endl;


}
