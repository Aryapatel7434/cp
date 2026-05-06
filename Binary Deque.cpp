#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,s;
        cin>>n>>s;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int left=0;
        int sum=0;
        int maxlen=-1;

        for(int right=0;right<n;right++){
            sum+=a[right];

            while(sum>s){
                sum-=a[left];
                left++;
            }
            if(sum==s){
                maxlen=max(maxlen,right-left+1);
            }
        }
        if(maxlen==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<n-maxlen<<endl;
        }
    }
}