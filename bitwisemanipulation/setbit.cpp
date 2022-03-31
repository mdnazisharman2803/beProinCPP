#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int getBit(int n, int pos){
    return (n | (1<<pos));
}
int main(){
    /* suppose n = 5 its binary form is 0101
    now we want to know at position =2 which bit is present?
    is it 0 or 1. 
    so for finding it.
    we will make  variable in that variable we will put only 1 ar the position where we want to set bit in orignal number
    so for doing  that we will do left shift of variable i by 1
    i= positon.
    so here 1<<i=0100
    hence we got 1 at the position where we want to set bit.
    now to set bit, we will "or" our real number to the number obtained after left shift
    that will give us 1 if 1 is present at bit or 1 if 0 is present at bit in orginal number
    because we are doing or operation with left shift obtained number so it have 1 at only place where we required to set value
    so here we get
    0101 | 0100=0101=5
    hence 1 is present in original number already at position 2.and also setting will make 1.*/
cout<<getBit(5,2)<<endl;
cout<<getBit(5,1)<<endl;
}