#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int l=-1,r=-1;
    //find first mismatch
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            l=i;
            break;
        }
    }
    if(l==-1){
        cout<<1<<" "<<n<<endl;//means both array are same.
    }
    //find last mismatch
    for(int i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            r=i;
            break;
        }
    }
    //Expand left
    while(l>0 && b[l-1]<=b[l]){
        l--;
    }
    //Expand right
    while(r+1<n && b[r]<=b[r+1]){
        r++;
    }
    cout<<l+1<<" "<<r+1<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}