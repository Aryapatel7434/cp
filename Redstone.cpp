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
    //   
    
    //i use set
      unordered_set<int>s;
      bool ok=false;
        for(int x:v){
            if(s.count(x)){
                ok=true;
                break;
            }
            s.insert(x);
        }
        cout<<(ok?"YES\n":"NO\n");
    }
}
