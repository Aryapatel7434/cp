#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int MAX_ROOT=1000000;
vector<bool>buildSieve(){
    vector<bool>isprime(MAX_ROOT+1,true);

    isprime[0]=isprime[1]=false;

    for(int i=2;i*i<=MAX_ROOT;i++){
        if(isprime[i]){
            for(int j=i*i;j<=MAX_ROOT;j+=i){
                isprime[j]=false;
            }
        }
    }
    return isprime;

}
void solve(const vector<bool>&isprime){
    ll x;
    cin>>x;

    ll root=sqrtl(x);

    if(root*root==x && isprime[root]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main(){
    int n;
    cin>>n;

    vector<bool>isprime=buildSieve();

    while(n--){
        solve(isprime);
    }
    return 0;
    
}