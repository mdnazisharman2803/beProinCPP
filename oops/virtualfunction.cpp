#include<iostream>
using namespace std;

class addbydad{

  
  public:
  void display(){
    cout<<"dad runnning"<<endl;
  }
virtual  int sum(int i,int j){
     cout<<"printed by base class"<<endl;
      
      return i+j;
 }
   };
class addbyson : public addbydad{
  
  public:
  void display(){
    cout<<"son runnning"<<endl;
  }
  int sum(int i,int j){
      cout<<"printed by derived class"<<endl;
      return i+j;
      

  }
   };

 int main(){
     addbyson obj4;
     cout<<"output "<<obj4.sum(10,20)<<endl;

  addbydad obj3;
  cout<<"output "<< obj3.sum(30,40)<<endl;

       addbydad* obj2;
       addbyson obj;
       obj2= & obj; //address of object of derived class is asssigned to base class 
     

     
     cout<<"output "<< obj2->sum(30,40)<<endl;
      obj2->display();

 }