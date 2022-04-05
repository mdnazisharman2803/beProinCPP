#include<iostream>
using namespace std;
// making function for understanding pointers by passing value
void increament(int x){
    x++;
    cout<<x<<endl;
}

     //not passing by refrence
     void swap(int s, int t){
   int temp=s;
   s=t;
   t=temp;
         
}
// declaring with refcrence
 void swap2(int* ss, int* tt){
   int temp2=*ss;
   *ss=*tt;
   *tt=temp2;
         
}
// declaring with refcrence second method
 void swap3(int* sss, int* ttt){
   int temp3=*sss;
   *sss=*ttt;
   *ttt=temp3;
         
}

int main(){

    int a;
    a=10;
    int* aptr;
    aptr=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    // updating data using pointer
    *aptr=20;
    cout<<a<<endl;

    //pointer arithemetic
    aptr++;
    cout<<aptr<<endl;

    // pointers in arrays
    int arr[]={10,20,30};
    cout<<*arr<<endl;

    //pointer initialisation
    int b[3]={10,20,30};
    int* bptr;
    bptr= &b[0];
    cout<<*bptr<<endl;
    cout<<bptr<<endl;
     for(int i=0;i<3;i++){
         cout<<*bptr<<" ";
         bptr++;
    }
    cout<<endl;

    //pointer initialisation type 2
    int c[3]={10,20,30};
    int* cptr=c;
    for(int j=0;j<3;j++){
         cout<<*cptr<<" ";
         cptr++;
         
    }
    cout<<endl;
    //pointer initialisation type and other way to print
    int d[3]={10,20,30};
    int* dptr=d;
    for(int k=0;k<3;k++){
         cout<<*(d+k)<<" ";

    }

    //pointer to pointer
    cout<<endl;
    int bb;
    bb=69;
    int* q;
    q=&bb;
    int** r=&q;
    cout<<*r<<endl;
     cout<<**r<<endl;
    //pointer to pointer modification of data
    **r=55;
    cout<<bb<<endl;

    //passing pointer to functions
    int x=2;
    //passing by value
    increament(x);
    cout<<x<<endl;


     //passing by refrence see not working yet because not passed by refrence only declared
     int s=40;
     int t=41;
     int* sptr=&s;
     int* tptr=&t;
     swap(s,t);
     cout<<s<<" "<<t<<endl;

       //passing by refrence now we pass by refrence
     int ss=42;
     int tt=43;
     int* ssptr=&ss;
     int* ttptr=&tt;
     swap2(ssptr,ttptr);
     cout<<ss<<" "<<tt<<endl;
 //passing by refrence now we pass by refrence second way
     int sss=44;
     int ttt=45;

     //swapping one time
     swap2(&sss,&ttt);
     cout<<sss<<" "<<ttt<<endl;
     // swapping again to check new declaration and  so after swapping again turns noriginal
     swap3(&sss,&ttt);
     cout<<sss<<" "<<ttt<<endl;
}

