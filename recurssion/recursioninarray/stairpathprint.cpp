#include<iostream>
#include<algorithm>
using namespace std;

void printstairpath(int n,string psf){
        if(n==0){
        cout<<psf<<endl;
        return;
        }
    
      for(int jump=1;jump<=3;jump++){
          if(n-jump>=0){
          printstairpath(n-jump,psf+to_string(jump));
          }
      }

    
}

int main(){
    printstairpath(3,"");
}