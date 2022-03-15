#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"give dimension of first matrix ";
    cin>>r1>>c1;
     cout<<"give dimension of second matrix ";
    cin>>r2>>c2;
    if(c1!=r2){
           cout<<"Not Possible try to re enter new values"<<endl;
           
           cout<<"if you wish to continue and want to give correct value press 99 else you will  re run program by pressing any key ";
           int l=99;
           int c;
           cin>>c;
           if(l==c){
                        cout<<"give dimension of first matrix ";
                        cin>>r1>>c1;
                        cout<<"give dimension of second matrix ";
                        cin>>r2>>c2;
              
           }
           else{
                return 0;
           }
    }
    cout<<"enter first array elemnts"<<endl;
       int a1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
             cin>>a1[i][j];
         }
    }
   cout<<"enter second array elemnts"<<endl;
    int a2[r2][c2];
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
             cin>>a2[i][j];
         }
    }

    int ans[r1][c2];
        for(int i=0;i<r1;i++){
             for(int j=0;j<c2;j++){
            ans[i][j]=0;
         }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                ans[i][j] +=a1[i][k]*a2[k][j];
            }
        }
    }

            for(int i=0;i<r1;i++){

                  for(int j=0;j<c2;j++){
                    
                    cout<< ans[i][j]<<" ";

                 }
                 cout<<endl;
            }

    }