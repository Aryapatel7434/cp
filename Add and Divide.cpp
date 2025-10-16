#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
      long long a,b;
      cin>>a>>b;
      int ans=INT_MAX;
     

      int start=(b==1?1:0);

      for(int k=start;k<=60;k++){//loop for posible increment k.
        long long A=a;
        long long B=b+k;
        int cnt=k;

        while(A>0){
            A/=B;
            cnt++;
        }
        ans=min(ans,cnt);
      }
      cout<<ans<<endl;
       
    }
}