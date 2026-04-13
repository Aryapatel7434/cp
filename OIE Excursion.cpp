#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long m;
        cin>>n>>m;

        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        long long run=1,best=1;

        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                run++;
            }
            else{
                run=1;
            }
            best=max(best,run);
        }
        cout<<(best>=m ? "NO":"YES")<<endl;
    }
}