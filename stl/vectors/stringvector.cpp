#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<string>arr){
    cout<<"current size: "<<arr.size()<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
   vector<string> arr; 
   int n;
   cin>>n;
    for(int i=0;i<n;i++){
        string s;//  elemnt to be added at end .
        cin>>s;
    printvec(arr); // wanna check at each stage how array form.
    arr.push_back(s);
 

}
printvec(arr);
}