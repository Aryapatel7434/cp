#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        long long count1=0;
        long long count0=0;
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        for(long long i=0;i<n;i++){
            if(v[i]==1){
                count1++;
            }
            else if(v[i]==0){
                count0++;
            }
        }
      long long ways=pow(2,count0)*count1;
      cout<<ways<<endl;
    }
}