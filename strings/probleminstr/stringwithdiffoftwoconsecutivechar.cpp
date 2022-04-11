#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

void printstr(string str)
{ 
   string sb=str.substr(0,1);
int i=1;
string k;
while(i<str.length()){
    
    char curr=str[i];
    char prev=str[i-1];
    int gap=curr-prev;
    k=k+to_string(gap)+str[i];
   i++;
   
}
cout<<sb.append(k);
  
}

int main()
{
 string str;

  getline(cin, str);
  printstr(str);
  
  
  
}