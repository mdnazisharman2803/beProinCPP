#include<iostream>
#include<vector>
using namespace std;

void printvecwithref(vector<int>&arr){
    cout<<"current size: "<<arr.size()<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
arr.push_back(2);// adding element here so we can see the chnage in real array even outside this function as passed by ref
cout<<endl;
}


void printvec(vector<int>arr){
    cout<<"current size: "<<arr.size()<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
/*  
  // making without refrence
    vector<int> arr(5);  
  arr.push_back(7);
  arr.push_back(8);
  printvec(arr); // time complexity O(1)

    vector<int> arr2=arr; // arr 2 is copy of arr in time complexity O(n) but changes in arr2 wont reflect in arr
     arr2.push_back(9);
      printvec(arr2);
      printvec(arr); // cahnges wont get reflected as it not passed by ref.
*/

/*
// making with refrence
  vector<int> arr(5);  
  arr.push_back(7);
  arr.push_back(8);
  printvec(arr); // time complexity O(1)

    vector<int> &arr2=arr; // arr 2 is copy of arr in time complexity O(n) and changes in arr2 will reflect in arr
     arr2.push_back(9);
      printvec(arr2);
      printvec(arr); // cahnges  get reflected as it  passed by ref.
*/

// understanding passing vector with refrence and changes occured
vector<int> arr(5);  
  arr.push_back(7);
  arr.push_back(8);
  printvecwithref(arr); // hence we passing by refrence so new arr will be added  by elemnt 2 but not printed

    vector<int> arr2=arr; 
     arr2.push_back(9);
     printvecwithref(arr2);
     printvecwithref(arr); // hence we passing by refrence so new arr will be printed by elemnt 2 but if we print again then we can see two 2s
      printvecwithref(arr2); // arr 2 also passed by ref so changes willl appaear here too
      

}