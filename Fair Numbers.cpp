#include<bits/stdc++.h>
using namespace std;
bool isfair(long long x){
    long long temp=x;
    while(temp>0){
        int digit=temp%10;
        if(digit!=0 && x%digit!=0) return false;
        temp/=10;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        while(!isfair(n))n++;
        cout<<n<<endl;
    }
}