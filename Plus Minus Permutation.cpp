#include<bits/stdc++.h>
#include<numeric>
using namespace std;
long long lcm(long long a,long long b){
    return (a/__gcd(a,b))*b;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;

        if(x==y){
            cout<<0<<endl;
            continue;
        }
        long long l=lcm(x,y);//some common position.
        //count position
        long long cx=n/x;
        long long cy=n/y;
        long long cxy=n/l;//some comon postion

        //find maximize sum
        long long onlyx=cx-cxy;
        long long onlyy=cy-cxy;

        //sum of largest onlyxnumber
        //reverse element n,(n-1) and so on.
        long long positivesum=onlyx*n-(onlyx*(onlyx-1))/2;
        //sum of smallest onlyy numbers
        long long negativesum=(onlyy*(onlyy+1))/2;

        long long ans=positivesum-negativesum;

        cout<<ans<<endl;

    }
}