#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        int y,r;
        cin>>y>>r;

        cout<<min(n,r+y/2)<<endl;
    }
}