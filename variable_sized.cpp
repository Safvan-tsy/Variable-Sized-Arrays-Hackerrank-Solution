#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n,q;
     cin>>n>>q;
     vector<vector<int>>arr(n);
     for (int i=0; i<n; i++) {
         int j;
         cin>>j;
         arr[i].resize(j);
         for(int k=0;k<j;k++){
             
             cin>>arr[i][k];
         }
     
     }
     for(int qn=0;qn<q;qn++){
         int x,y;
         cin>>x>>y;
         cout<<arr[x][y]<<"\n";
         
     }
    return 0;
}

