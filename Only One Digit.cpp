#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int minele=INT_MAX;
        while(x>0){
            int z=x%10;
            minele=min(z,minele);
             x/=10;
        }
        cout<<minele<<endl;
    }
}