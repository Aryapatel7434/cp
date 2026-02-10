#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        long long sumAbs=0;
        int negCount=0;
        int minAbs=INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;

                if(x<0)negCount++;
                sumAbs+=abs(x);
                minAbs=min(minAbs,abs(x));
            }
        }
        if(negCount%2==1){
            sumAbs-=2LL*minAbs;
        }
        cout<<sumAbs<<endl;
    }
}