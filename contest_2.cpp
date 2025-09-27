#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>diff;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=1;i<n;i+=2){
            int z=abs(v[i-1]-v[i]);
            diff.push_back(z);
        }
        int maxel=INT_MIN;
        for(int i=0;i<diff.size();i++){
            maxel=max(maxel,diff[i]);
        }
        cout<<maxel<<endl;
    }
}