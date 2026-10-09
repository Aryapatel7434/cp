#include<bits/stdc++.h>
using namespace std;
int solve(string s,int k,char target){
    int left=0;
    int changes=0;
    int ans=0;

    for(int right=0;right<s.size();right++){
        if(s[right]!=target){
            changes++;
        }
        while(changes > k){
            if(s[left]!=target){
                changes--;//Expand Window from left
            }
            left++;
        }
        ans=max(ans,right-left+1);
    }
    return ans;
}
int main(){
      int n,k;
      cin>>n>>k;

      string s;
      cin>>s;

      int makeA=solve(s,k,'a');
      int makeB=solve(s,k,'b');

      cout<<max(makeA,makeB)<<endl;

}