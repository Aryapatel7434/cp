#include<bits/stdc++.h>
using namespace std;
bool isprime(long long x){
    if(x<2) return false;
    for(long long i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        //smallest prime p1>=d+1;
        //next prime q1>=p1+d;
        long long d;
        cin>>d;

        long long p1=d+1;//diffrence is atleast d.
        while(!isprime(p1)) p1++;//find the smallest prime number.

        long long p2=p1+d;
        while(!isprime(p2)) p2++;

        cout<<p1*p2<<endl;

    }
}