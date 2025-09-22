#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        // That’s the trick: we don’t simulate every attack. We just calculate how many hits each monster needs.
        vector<pair<long long,int>>monsters;
        for(int i=0;i<n;i++){
            long long hits=(v[i]-1)/k+1;//this ceil
            monsters.push_back({hits,i+1});
        }
        //sort the hits basis
        sort(monsters.begin(),monsters.end());

        for(auto &m :monsters){
            cout<<m.second<<" ";
        }
        cout<<endl;
    }
}