#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int Alice=0;
        int Bob=0;

        //apply the logic of bs
        int lo=0;
        int hi=n-1;
        vector<int>diff;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            for(int i=0;i<=mid;i++){
                Alice+=v[i];
            }
            for(int i=n-1;i>mid;i--){
                Bob+=v[i];
            }
          
             
        }
     }
}