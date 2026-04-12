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


        vector<int>dp(n+1,0);

        dp[n]=0;//empty sequence allowed

        for(int i=n-1;i>=0;i--){

            //keep 
            dp[i]=1+dp[i+1];
           //DELETE
            if(i+a[i]<n){
                dp[i]=min(dp[i],dp[i+a[i]+1]);
            }

        }
        cout<<dp[0]<<endl;
    }
}