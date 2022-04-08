#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<int>arr){
    cout<<"current size: "<<arr.size()<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
    vector<int> arr(5);  // array (arr)of int type of size 5 made. if we dont put value its all element will be automatically initialised with value 0.
   printvec(arr);

   // now we can increase size of same array although its size declared as its vector
   arr.push_back(8); // used to add value at end of array  in time complexity of O(1).so now size should be 6
   printvec(arr);

 arr.push_back(9);
  printvec(arr);
  arr.pop_back(); // use to remove vale from end in time complexity of O(1). so size decrease from 7 to 6 
 printvec(arr);

}