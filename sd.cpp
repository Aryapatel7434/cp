#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int cnt=0;

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            continue;;
        }
        bool canplace=true;

        //check left side
        for(int j=max(0,i-k);j<i;j++){
            if(s[j]=='1'){
                canplace=false;
                break;;
            }
        }
        // check right side
        if(canplace){
            //if left postion is valid then and only you reserve right side
            for(int j=i+1;j <= min(n-1,i+k);j++){
                    if(s[j]=='1'){
                        canplace=false;
                        break;
                    }
            }
        }
        if(canplace){
            s[i]='1';
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main(){
      int t;
      cin>>t;

      while(t--){
        solve();
      }
}