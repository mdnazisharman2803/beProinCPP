#include<iostream>
using namespace std;

class teacher{
     public:
     string clgename="abjx nsnwknk";
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

int main(){
    subteacher call;
    cout<<call.clgename; // accesing vaariable of parent class usingh child class
}