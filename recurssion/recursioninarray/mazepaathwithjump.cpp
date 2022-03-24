#include<iostream>
#include<algorithm>
using namespace std;


    void printMazePathswithjump(int k, int l, int i, int j, string psf) {
        //horizontal
        if(i==k-1 && j==l-1){
            cout<<psf<<endl;
            return;
        }
        for(int jump=1;jump<l;jump++){
            if(i+jump<l){
            printMazePathswithjump(k,l,i+jump,j,psf + 'h'+ to_string(jump));
          }  
          }
          //vertical
           for(int jump=1;jump<k;jump++){
            if(j+jump<l){
            printMazePathswithjump(k,l,i,j+jump,psf + 'v'+ to_string(jump));
          }  
          }
          // diagonal
           for(int jump=1;jump<l && jump<k;jump++){
            if(i+jump<k && j+jump<l){
            printMazePathswithjump(k,l,i+jump,j+jump,psf + 'd'+ to_string(jump));
          }  
          }
        
    }

int main() {
        int n ;
        int m ;cin>>n>>m;
        printMazePathswithjump( n, m, 0, 0, "");
    }