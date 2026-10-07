#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      long long d;

      cin>>n>>d;

      vector<pair<long long,long long>>friedns(n);

      for(int i=0;i<n;i++){
        cin>>friedns[i].first>>friedns[i].second;
      }
      sort(friedns.begin(),friedns.end());

      long long sum=0;
      long long answer=0;
      int left=0;

      for(int right=0;right<n;right++){
          sum+=friedns[right].second;

          while(friedns[right].first - friedns[left].first >= d){
             sum-=friedns[left].second;
             left++;
          }
          answer=max(answer,sum);
      }
      cout<<answer<<endl;
}