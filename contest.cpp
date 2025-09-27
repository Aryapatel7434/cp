#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int count0=0;
        int count_1=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==-1){
                count_1++;
            }
            if(v[i]==0){
                count0++;
            }
        }
        if(count_1%2!=0){
            cout<<2+(count0*1)<<endl;
        }
        else if(count0==0 && count_1==0){
            cout<<0<<endl;
        }
        else{
            cout<<count0<<endl;
        }

    }
}