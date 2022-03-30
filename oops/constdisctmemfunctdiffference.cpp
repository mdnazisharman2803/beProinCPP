#include<iostream>
using namespace std;


// destructor like constructor automatically called
// called when program finished execution
class helloworld{
    public:
    // constructor
   helloworld(){
     cout<<"constructor is called"<<endl;
 }
 //destructor
 ~helloworld(){
     cout<<"destructor is called"<<endl;
 }
 
 // member function
 void display(){

     cout<<"this is member function"<<endl;
     
 }
 
};


int main(){
helloworld obj;
obj.display();

int x1;
cin>>x1;
cout<<x1+2<<endl;

cout<<"main execution finished"<<endl;
return 0;

}