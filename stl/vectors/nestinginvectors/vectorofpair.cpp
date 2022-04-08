#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<pair<int,int>>arr){
    cout<<"current size: "<<arr.size()<<endl;
for(int i=0;i<arr.size();i++){
  
  //  cout<<arr[i]<<" "; since arr [i] is pair so we have to get it using .first and .second for first and second vector respectively 

 cout<<arr[i].first<<" ";

 cout<<arr[i].second<<" ";

 cout<<endl;

}
cout<<endl;
}
int main(){

/* 
    // intialising manually.
   vector<pair<int,int>>arr={{1,4},{2,5},{3,6}};  // vector means array of type int and int and we declare it by arr, at same time we initialiseb in curly bracket

*/

   // intialise by user input

   vector<pair<int,int>>arr;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int x; // element to be pushed in index of first array
       int y;// element to be pushed in index of second array
       cin>>x>>y;
       printvec(arr); // to check dynamic fiormation of both array
       arr.push_back({x,y}); // in the vector we want to add value in the pair so push back used first then initialised by curly braces or can be initialised  for {1st pos, 2nd pos} in pair or can use  arr.push_back(make_pair(x,y));
   }
  
 printvec(arr);

}