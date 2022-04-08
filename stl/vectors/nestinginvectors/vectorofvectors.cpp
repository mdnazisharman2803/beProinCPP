#include<iostream>
#include<vector>

using namespace std;
/* i am using vector of vector which means we can make 
2d array with variable row as well as column which was not in array of vector there was row fixed but
columns can varry. while in 2 d array roes and column both fixed */

void printvec(vector<int>arr){
    cout<<"current size: "<<arr.size()<<endl;
for(int k=0;k<arr.size();k++){
  cout<<arr[k]<<" ";

}
cout<<endl;
}
int main(){
    
    int N; // N= how many array you want to make this N we can consider as row of 2d vector which we can varry using push back or pop back function
    cout<<"how many rows you want to take at start "<<endl;
    cin>>N;

    vector<vector<int> > arr; // vector of vector is declared without initialisation or any size its just the declaration
    
    // loop for intialising each N vector or simply filling rows while varrying column one by one

    for(int i=0;i<N;i++){
        
        int n; //size of each  array  one by one this size can be different for different rows
        cout<<"enter size of array no: "<<i+1<<endl;
        cin>>n;
        arr.push_back(vector<int>()); // previously we only declare we want to make N vectors or row but since we declare vector of vector so we created this first empty vector or simply row in which elemts can be filled.. this can be done using temp vector as well. vector<int>temp; it means we currently created an empty 1d array
        for(int j=0;j<n;j++){
            
            int x; //element to be added
            cout<<"enter elent no: "<<j+1<<" for array no: "<<i+1<<endl;
            cin>>x;
            arr[i].push_back(x); // elemt going in ith vector  .. now we can see we are fetching elements in vector or a given row of specefied size above n. this can be done in other way if we created temp vector then we can fetch temp.push_back(x).. but if we already created empty vector like now then that was already created inside the outer vector but this temp is not in the outer vector so adding this temp vector in outer vector we can use arr.pushback(temp)
           
        }
          
    }

     // loop for printing each N array one by one

       for(int f=0;f<arr.size();f++){
           printvec(arr[f]); //fth array passed to be printed.
       }

       // manipulation we can do with rows
    
       cout<<"do you want to manipulate row if yes press 1: "<<endl;
       int o;
       cin>>o;
       if(o==1){
           cout<<"printing  first row second element: "<<" ";
           cout<<arr[0][1]<<endl; // printing first row second elent
           cout<<"manipulation stareted ...... "<<endl;
           arr.push_back(vector<int>());
             cout<<"empty row added at end lets print "<<endl;
             for(int f=0;f<arr.size();f++){
           printvec(arr[f]); 
       }

       }
       else{
           return 0;
       }
}