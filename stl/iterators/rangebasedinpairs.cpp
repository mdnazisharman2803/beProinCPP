#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<pair<int,int>>arr){
    cout<<"current size: "<<arr.size()<<endl;
for(int i=0;i<arr.size();i++){
  
 
 cout<<arr[i].first<<" ";

 cout<<arr[i].second<<" ";

 cout<<endl;

}
cout<<endl;
}
int main(){

vector<pair<int,int>>arr;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int x;
       int y;
       cin>>x>>y;
       arr.push_back({x,y}); 
   }
  printvec(arr);

/* //iterating using iterator
  vector<pair<int,int>> :: iterator it;
  
   for( it=arr.begin();it<arr.end();it++){
    cout<<(*it).first<<" ";  // general syntax when itertior ponts to pair is cout<<(it->first)<<" ";
    cout<<(*it).second<<" ";
    cout<<endl;
   }
   */

  //iterate using value
  for(pair<int,int> value : arr){
      cout<<value.first<<" ";
      cout<<value.second<<" ";
      cout<<endl;
  }
   cout<<endl;

  //passsing with refrence and manipulate
   for(pair<int,int> &value : arr){
      value.first++;
      value.second++;
       }
   for(pair<int,int> value : arr){
      cout<<value.first<<" ";
      cout<<value.second<<" ";
      cout<<endl;
  }
}

