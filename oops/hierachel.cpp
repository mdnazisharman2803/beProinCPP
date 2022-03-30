#include<iostream>
using namespace std;

class teacher{
     public:
     string clgename="in this college ";
     public:
      teacher(){
          cout<< "i am a teacher"<<endl;
      }
};

class subteacher: public teacher{
    public:
    int time=5;
    subteacher(){
        cout<<" but i teach only one subject"<<endl;
    }
};
class mathsteacher: public teacher{
    public:
    mathsteacher(){
        cout<<" and i teach only maths"<<endl;
    }
};
int main(){
    mathsteacher call; // we made object of mathsteacher class only thereforer time will not be accesable to it. but clgname willbe  and call itself. 
    cout<<call.clgename; // accesing vaariable of parent class usingh child class
   // cout<<"from "<<call.time<<" years"; // not be accesable by mathsteacher as mathsteacher and subteacher are sibling
}