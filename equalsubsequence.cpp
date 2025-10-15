#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,k;
        cin>>n>>k;
       vector<int>ans(n,0);
       int count=0;
    while(count<k){
        ans[count]=1;
        count++;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
    cout<<endl;

    }
    
}