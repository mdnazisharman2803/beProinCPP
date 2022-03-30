#include<iostream>
using namespace std;

class boss
{
    // variable of class
  private:
  string color="red";
  int speed=70;

  // function of class
   
  int sped(int speed){
       return 2*speed;
   }
public:   

friend void display(boss obj2); // declaring function as friend
  
};
  // global function 
   void display(boss obj){
       cout<<obj.color<<endl; // accesing variable using  friend functon
        cout<<obj.speed<<endl;  // accesing variable using  friend functon
       int v =70;
        
     cout<<obj.sped(v);// accesing function using  friend functon
   }
int main(){
   boss obj2;
  display(obj2);
 

} 

