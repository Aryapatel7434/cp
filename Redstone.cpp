#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        //main logic only check first and last main logic any duplicate element present in array means i rearrange this element and i a1=an means rightmost gear speed is 1 found.
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        unordered_map<int,int>mp;
        for(auto it:v){
            mp[it]++;
        }
        bool flag=false;
       for(auto ir:mp){
          if(ir.second>=2){
            flag=true;
            break;
          }
       }
       if(flag==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}
