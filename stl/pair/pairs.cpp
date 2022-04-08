#include<iostream>
using namespace std;

int main(){
  //  pair<1,2> p; syntax of pair having name p and it can hold two values at pos1 ans pos2

pair<int,string> p;
p= make_pair(2,"abc"); // way to initialise value to the designated positonal variable


// way to print values
cout<<p.first<<endl;  
cout<<p.second<<endl;

p={4,"abx"}; // second way to initialise value to the designated positonal variable
cout<<p.first<<endl;  
cout<<p.second<<endl;

//copying p 
pair<int,string> p1=p;
//initialising the  first elemnt of p1
p1.first=3; 
cout<<p.first<<endl; // it will not print 3 as we are not passing with refrence
cout<<p1.first<<endl;  

//copying p by giving refrence
pair<int,string> &p2=p;
//initialising the  first elemnt of p2 as well as p
p2.first=3; 
cout<<p.first<<endl; // it will  print 3 as we are  passing with refrence
cout<<p2.first<<endl;  


}