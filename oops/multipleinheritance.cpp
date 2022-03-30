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

class subteacher{
    public:
    int time=5;
    subteacher(){
        cout<<" but i teach only one subject"<<endl;
    }
};
class mathsteacher: public teacher, public subteacher{
    public:
    mathsteacher(){
        cout<<" and i teach only maths"<<endl;
    }
};
int main(){
    mathsteacher call;
    cout<<call.clgename; // accesing vaariable of parent class usingh child class
    cout<<"from "<<call.time<<" years";
}