#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=a[i];
            if(sum>0){
                count++;

            }
            else{
                sum=0;
            }
        }
        cout<<count<<endl;
    }
}