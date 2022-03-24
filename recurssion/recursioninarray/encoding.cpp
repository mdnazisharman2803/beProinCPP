#include <iostream>
#include<string>
using namespace std;

void printEncoding(string str, string asf){
    if(str.length()==0){
        cout<<asf<<endl;
        return;
    }
    int ch=str[0]-'0';
    string ros=str.substr(1);
    if(str.length()==1){
        printEncoding(ros,asf+char(ch-1+'a'));
    }
    else{
        if(ch==0){
            return;
        }
         printEncoding(ros,asf+char(ch-1+'a'));
         ch=stoi(str.substr(0,2));
         ros=str.substr(2);
         if(ch<=26){
              printEncoding(ros,asf+char(ch-1+'a'));
         }
    }
    
}

int main(){
    string str;
    cin>>str;
    printEncoding(str,"");
    
}