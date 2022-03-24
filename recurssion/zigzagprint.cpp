#include<iostream>
using namespace std;
  

  void pizz(int n){
      if(n==0){
          return;
      }
      cout<<"pre"<<" "<<n<<endl;
      pizz(n-1);
      cout<<"in"<<" "<<n<<endl;
      pizz(n-1);
      cout<<"post"<<" "<<n<<endl;
  }
int main(){
    int n;
    cin>>n;
    pizz(n);
}
