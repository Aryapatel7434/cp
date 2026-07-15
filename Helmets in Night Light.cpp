#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    int n,p;
    cin>>n>>p;

    vector<int>a(n);
    vector<int>b(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int,int>>people;
    //{cost per share,maximum share}

    for(int i=0;i<n;i++){
        people.push_back({b[i],a[i]});

        sort(people.begin(),people.end());

        long long ans=p;//first person to inform
        int remaining=n-1;//remaining people
        for(auto &person:people){
            int cost=person.first;//price
            int limit=person.second;//spread

            if(remaining==0) break;

            if(cost >= p) break;//use value p;

            int use = min(limit,remaining);

            ans+=1LL*use*cost;

            remaining-=use;
        }

        ans+=1LL*remaining*p;

        cout<<ans<<endl;
    }
}