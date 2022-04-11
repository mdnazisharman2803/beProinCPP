#include<iostream>
#include<string>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

void printallperm(string str)
{ int n=str.length();
int f= factorial(n);
for(int i=0;i<f;i++){
    string sb=str;
    int temp=i;
    for(int div=n;div>=1;div--){
        int q=temp/div;
        int r=temp%div;

    }
}
  
}

int main()
{
  string str;
  getline(cin, str);

  printallperm(str);
}