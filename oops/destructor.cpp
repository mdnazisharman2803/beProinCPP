#include<iostream>
using namespace std;


// destructor like constructor automatically called
// called when program finished execution
class destructor{
    public:

 ~destructor(){
     cout<<"destructor is called";
 }
 
};


int main(){
destructor obj;
}