#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        //main logic is i find Gcd of even ind ele and Gcd find odd idx element and this Gcd checj corrospond like odd Groud Gcd divide even index element and even Group Gcd divide odd index element.
        long long g1=0,g2=0;

        for(int i=0;i<n;i++){
            if(i%2==0) g1=std::gcd(g1,(long long)v[i]);
            else g2=std::gcd(g2,(long long)v[i]);
        }
        //if g1 divides to the even idx element
        bool ok1=true;
        for(int i=1;i<n;i+=2){
            if(v[i]%g1==0){
                ok1=false;
                break;
            }
        }
        if(ok1){
            cout<<g1<<endl;
            continue;
        }
        //check if g2 works
        bool ok2=true;
        for(int i=0;i<n;i+=2){
            if(v[i]%g2==0){
                ok2=false;
                break;
            }
        }
        if(ok2){
            cout<<g2<<endl;
            continue;
        }
        cout<<0<<endl;
    }
}