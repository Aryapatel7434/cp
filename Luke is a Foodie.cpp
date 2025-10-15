#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        //This q main logic is find range |v-a[i]|<=x means v=+-(a[i]+x)   v[i]-x<= x <=v[i]+x  this is formula ans (l1,l2) and (r1,r2) so l>r means intesection point is not find so change the range max(l1,l2)=l ans min(r1,r2)=r.
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<pair<int,int>>segments(n);
        for(int i=0;i<n;i++)
            segments[i]={a[i]-x,a[i]+x};

            int ans=0;
            int l=segments[0].first;
            int r=segments[0].second;
            for(int i=1;i<n;i++){
                l=max(l,segments[i].first);
                r=min(r,segments[i].second);

                if(l>r){
                    ans++;
                    l=segments[i].first;
                    r=segments[i].second;
                }
            }
        
             cout<<ans<<endl;
        }
    }
