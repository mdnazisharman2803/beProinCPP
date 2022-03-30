#include<iostream>
using namespace std;

/* The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 
A real-life example of polymorphism, a person at the same time can have different characteristics.
 Like a man at the same time is a father, a husband, an employee. So the same person posses different behavior in different situations. This is called polymorphism.
 Polymorphism is considered as one of the important features of Object Oriented Programming. */

 // compile time .. static or early binding
 // this exaple of function overloading as well

 class add{
  
  public:
  int sum(int i,int j){
      return i+j;

  }
  int sum(int i,int j,int k){
      return i+j+k;
      
  }

 };

 int main(){
     add obj;
      cout<<"output "<<obj.sum(10,20)<<endl;
     cout<<"output "<<obj.sum(10,20,30)<<endl;

 }