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

friend class friendz; // declaring class as friend
  
};

class friendz
{
   public:   
   void display(boss obj){
       cout<<obj.color<<endl; // accesing variable  using friend class
        cout<<obj.speed<<endl;  // accesing variable using friend class
        int v =70;
        
     cout<<obj.sped(v);// accesing function using friend class

   }
  
};

int main(){
  friendz obj;
   boss obj2;
  obj.display(obj2);
 

} 

