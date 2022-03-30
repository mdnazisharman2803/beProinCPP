#include<iostream>
using namespace  std;

class number{
    int n1;
    int n2;
    public:
    number()// default constroctor or non para metrized
    {
         n1=0;
       n2=0;

    }
    
    number( int num1,int num2) // para metrized
    { 
       n1=num1;
       n2=num2;
       cout<<num1+num2<<endl;
    }
    // compiler already give default copy constructor to each class therefore if u not write copy constructor and use directly it will run but line inside copyu constructor not execute
    number( number &obj) // copy constructor
    {
        cout<< "copy constructor called"<<endl;
        n1=obj.n1;
        n2=obj.n2;
        cout<<n1*n2<<endl;
    }
      
    void display(){
        cout<<n1<<endl;
        cout<<n2<<endl;
    }
  
};

int main(){
 number x, z(30,40);
 
 //x.display();
 
 z.display();



 // let z1 object exactly resemble z
 number z1(z);
 z1.display();
}