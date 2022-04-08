#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<int>arr){
    cout<<"current size: "<<arr.size()<<endl;
for(int k=0;k<arr.size();k++){
  cout<<arr[k]<<" ";

}
cout<<endl;
}
int main(){
    
    int N; // N= how many array you want to make
    cout<<"how many array you want to make "<<endl;
    cin>>N;

    vector<int> arr[N]; // N array is declared without initialisation or any size its just the declaration
    
    // loop for intialising each N array one by one

    for(int i=0;i<N;i++){
        
        int n; //size of each  array  one by one
        cout<<"enter size of array no: "<<i+1<<endl;
        cin>>n;
        for(int j=0;j<n;j++){
            
            int x; //element to be added
            cout<<"enter elent no: "<<j+1<<" for array no: "<<i+1<<endl;
            cin>>x;
            arr[i].push_back(x); // elemt going in ith vector
           
        }
          
    }

     // loop for printing each N array one by one

       for(int f=0;f<N;f++){
           printvec(arr[f]); //fth array passed to be printed.
       }
}