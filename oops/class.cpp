#include<iostream>
using namespace std;

/* syntax of class
class class-name{

}; */

class car
{
    // variable of class
  string color;
  public:
  int speed;
public:   // after this line everything will be accesable from outside but before it we cant.
  // declaring annd defining function of class
  void getdata(int distance,int fuel){

    cout<<"the car has covered "<<distance<< "km and has consumed "<<fuel<<"l";


 }
       float speedo(int dist ,int time); // declaring function in the class

       void s(){

    cout<<"the car has "<<speed;


 }
}audi; // this is second way to make object is just putting name of the abject before semicolon

float car ::speedo(int d,int t)
{
    float k =d/t;
  return k;
} 

int main(){
    // making object of class or instance of class
    car swift;
// dot is used to acces varibale and function of class but only public one if we not declare public everything will be private 
// so to use it we must mention it as public and then we can use all lines  down  from where we declared public.
    swift.getdata(130,40); //calling function of class
    cout<<endl;
   audi.getdata(40,1);
 cout<<endl;
cout<< swift.speedo(82,5);


// trying to access variable
swift.speed=50;
swift.s();
} 

