#include<iostream>
using namespace std;

/* The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 
A real-life example of polymorphism, a person at the same time can have different characteristics.
 Like a man at the same time is a father, a husband, an employee. So the same person posses different behavior in different situations. This is called polymorphism.
 Polymorphism is considered as one of the important features of Object Oriented Programming. */

 // run time .. dynamic or late  binding
 // this exaple of function overriding as well

 class addbydad{
  
  public:
  int sum(int i,int j){
      cout<<"dad runnning"<<endl;
      return i+j;

  }
   };
class addbyson : public addbydad{
  
  public:
  int sum(int i,int j){
      return i+j;

  }
   };

 int main(){
     addbyson obj;
     cout<<"output "<<obj.sum(10,20)<<endl;
       addbydad obj2;
     cout<<"output "<<obj2.sum(30,40)<<endl;

 }