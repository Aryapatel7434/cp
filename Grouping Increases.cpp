#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       int penalty=0;

       int last_s=INT_MAX;
       int last_t=INT_MAX;

       for(int x:a){
         if(x<=last_s){
            last_s=x;
         }
         else if(x<=last_t){
            last_t=x;
         }
         else{
            //we must take panelty
             penalty++;

             if(last_s<last_t){
                last_s=x;
             }
             else{
                last_t=x;
             }
         }
       }
       cout<<penalty<<endl;
    }
}