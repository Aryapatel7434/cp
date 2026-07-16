#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int>a(n);
        vector<int>b(n);

        vector<int>bestA(2*n+1,0);
        vector<int>bestB(2*n+1,0);

        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++) cin>>b[i];

        //process array a
        int cnt=1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]) cnt++;
            else{
                bestA[a[i-1]]=max(bestA[a[i-1]],cnt);
                cnt=1;
            }
        }
        bestA[a[n-1]]=max(bestA[a[n-1]],cnt);

        //Process Array b
        cnt=1;
        for(int i=1;i<n;i++){
            if(b[i]==b[i-1]){
                cnt++;
            }
            else{
                bestB[b[i-1]]=max(bestB[b[i-1]],cnt);
                cnt=1;
            }
        }
        bestB[b[n-1]]=max(bestB[b[n-1]],cnt);

        int ans=0;

        for(int val=1;val<=2*n;val++){
            ans=max(ans,bestA[val]+bestB[val]);
        }
        cout<<ans<<endl;

    }
}