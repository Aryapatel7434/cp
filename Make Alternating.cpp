#include<bits/stdc++.h>
using namespace std;
static const long long MOD = 998244353;
int main(){
    int t;
    cin>>t;

    const int MAXN=200000;
    vector<long long>fact(MAXN+1);
    fact[0]=1;
    for(int i=1;i<=MAXN;i++){
        fact[i]=(fact[i-1]*i)%MOD;
    }
    while(t--){
        string s;
        cin>>s;

        long long minops=0;
        long long ways=1;

        int n=s.size();
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && s[j]==s[i]){
                j++;
            }
            int len=j-i;//similar element block length
            minops+=(len-1);
            ways=(ways*fact[len])%MOD;
            
            i=j;//move to next block
        }
      cout<<minops<<" "<<ways<<endl;
    }
}