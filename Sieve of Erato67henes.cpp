#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if (find(a.begin(), a.end(), 67) != a.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}