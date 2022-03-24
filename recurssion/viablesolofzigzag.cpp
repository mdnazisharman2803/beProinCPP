#include<iostream>
using namespace std;
  

  void pizz(int n){
      if(n==0){
          return;
      }
      // better approach is to visualise by tree diagram
      cout<<n<<endl;
      pizz(n-1);
      cout<<n<<endl;
      pizz(n-1);
      cout<<n<<endl;
  }
int main(){
    int n;
    cin>>n;
    pizz(n);
}