#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int count=0;
        int i=0;
        while(i+k<=n){
            bool flag=true;
            for(int j=i;j<i+k;j++){
                if(v[j]==1)
                {
                    flag=false;
                    break;
                }
            }
            if(flag){
                count++;
                i+=k+1;
            }
            else{
                i++;
            }
        }
        cout<<count<<endl;
       

    }
}