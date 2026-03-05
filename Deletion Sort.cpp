#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);

        for(auto &it:a) cin>>it;

        if(is_sorted(a.begin(),a.end())) cout<<n<<endl;
        else cout<<1<<endl;
    }
}