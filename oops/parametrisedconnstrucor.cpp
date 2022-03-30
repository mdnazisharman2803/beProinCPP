#include<iostream>
using namespace  std;

class parametrisedclass{
    public:
    parametrisedclass(int n1 , int n2){
        cout<< n1+n2;
    }

};

int main(){
 parametrisedclass obj(10,20);
}