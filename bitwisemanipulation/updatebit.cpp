#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int updaeBit(int n, int pos, int value){
    int mask=~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}
int main(){
    /* update bit = clear bit and then set bit
    first step is to clear bit
    suppose n = 5 its binary form is 0101
    now we want to clear at position =1 which bit is present?
       so for doing it.
    we will make  variable in that variable we will put only 1 ar the position where we want to clear bit in orignal number
    so for doing  that we will do left shift of variable i by 1
    i= positon.
    so here 1<<i=0010
    hence we got 1 at the position where we want to clear bit.
    now to clear bit, we will ones compliment  of the number obtained after left shift
    that will flip the numbers so 0 will be present at the bit we want clear and rest place willbe 1: ~0010=1101
    so here we will "and" our real number with number after ones compliment;
    0101 & 1101 =0101.
    hence we will clear it
    now we can set bit*/

cout<<updaeBit(5,1,1)<<endl;

}