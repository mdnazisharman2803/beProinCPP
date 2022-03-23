#include<iostream>
#include<climits>
using namespace std;
int main(){

    int n1;
    cin>>n1;
    int arr1[n1];
    
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    int n2;
    cin>>n2;
    int arr2[n2];
    
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    int m = max(n1,n2);
    int ans[m];

    int i= n1-1;
    int j= n2-1;
    int k= m-1;
    int borr=0;
    while(k>=0){
        int diff=(arr2[j]-borr);
        if(i>=0){
          diff-=arr1[i];
          }
        if(diff<0){
            diff+=10;
            borr=1;
        }
        else{
            borr=0;
        }

       ans[k]=diff;
        i--;
        j--;
        k--;

    }
    i=0;
   while(ans[i]==0){
       i++;
   }
   while(i<m){
       cout<<ans[i]<<endl;
       i++;
   }
    }