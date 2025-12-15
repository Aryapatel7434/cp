#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        
         int maxlen=INT_MIN;
         //first idx of the 1
         int first=0;
         for(int i=0;i<n;i++){
             if(v[i]==1){
                first=i;
                break;
             }
         }
         int lastidx=0;
         for(int i=0;i<n;i++){
            if(v[i]==1){
                lastidx=i;
            }
         }
         if((lastidx-first)>=x){
            cout<<"NO"<<endl;
         }
         else{
            cout<<"YES"<<endl;
         }
    }
}