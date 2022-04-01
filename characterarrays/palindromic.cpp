#include<iostream>
using namespace std;

    int main(){

    int l;
    cin>>l;
    char arra[l+1];
    cin>>arra;
   
   bool check = true;

       for(int i=0;i<l;i++){
           if(arra[i]!=arra[l-1-i]){
               check =false;
               break;
           }
       }
        if(check==true){
            cout<<"its a palindrome";
        }
        else{
        cout<<"not a palindrome";
        }
}