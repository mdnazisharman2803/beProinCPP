#include<iostream>
using namespace std;

class teacher{
     public:
     string clgename="in this college";
     public:
      teacher(){
          cout<< "i am a teacher"<<endl;
      }
};

class subteacher: public teacher{
    public:
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
class strictteacher: public teacher,public subteacher,public mathsteacher{
    public:
    strictteacher(){
        cout<<" and im strict"<<endl;
    }
};
int main(){
    strictteacher call;
   // cout<<call.clgename<<endl; // accesing vaariable of parent class usingh child class error bec maths teacher and sub teacher are sibling .

    mathsteacher hierchal1;
    subteacher  hierchal2;

}