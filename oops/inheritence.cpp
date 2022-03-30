#include<iostream>
using namespace std;

class teacher{
     public:
     string clgename="abjx nsnwknk";
     public:
      void status1(){
          cout<< "i am a teacher"<<endl;
      }
};

class subteacher: public teacher{
    public:
    void status2(){
        cout<<" but i teach only one subject"<<endl;
    }

    void display(){
        cout<<clgename<<endl;
    }

};
int main(){
 subteacher call; // we created only one time object and access the function of teacher class as well
 call.status1(); // calling member fumction of teacher class using sub teacher class class without even creating object for teacher class
 call.status2(); // calling member function of sub teacher class
 call.display(); // calling memebr  function of sub teacher class using  member variable of teacher class
 call.clgename= " abjbsc nanack"; // redifing member function of teacher class from main function without even creating object for teacher class
 call.display(); // after redifining calling memebr  function of sub teacher class using  member variable of teacher class

}