#include<iostream>
using namespace std;

int counting(int s,int e){
        if(s==e){
            return 1;
        }
        if (s>e){
            return 0;
        }
        int count=0;
        for(int i=1;i<6;i++){
            count=count+ counting(s+i,e);
        }

   return count;
}

int main(){
    cout<<counting(0,3);
}