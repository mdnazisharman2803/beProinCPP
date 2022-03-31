#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int clearBit(int n, int pos){
    int mask=~(1<<pos);
    return (n & mask);
}
int main(){
    /* suppose n = 5 its binary form is 0101
    now we want to clear at position =2 which bit is present?
       so for doing it.
    we will make  variable in that variable we will put only 1 ar the position where we want to clear bit in orignal number
    so for doing  that we will do left shift of variable i by 1
    i= positon.
    so here 1<<i=0100
    hence we got 1 at the position where we want to clear bit.
    now to clear bit, we will ones compliment  of the number obtained after left shift
    that will flip the numbers so 0 will be present at the bit we want clear and rest place willbe 1: ~0100=1011
    so here we will "and" our real number with number after ones compliment;
    0101 & 1011 =0001.
    hence we will clear it*/
cout<<clearBit(5,2)<<endl;

}