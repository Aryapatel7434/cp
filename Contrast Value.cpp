#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //remove consecutive duplicate
        vector<int>v;
        for(int i=0;i<n;i++){
            if(i==0 || a[i]!=a[i-1]){
                v.push_back(a[i]);
            }
        }
        //if size is 1 or 2 means direction is not change
        if(v.size()<=2){
            cout<<v.size()<<endl;
            continue;
        }
        int ans=2;//first and last always include

        for(int i=1;i+1<v.size();i++){
            int d1=v[i]-v[i-1];
            int d2=v[i+1]-v[i];

            //direction change
            if((d1>0 && d2<0)||(d1<0&&d2>0)){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
}