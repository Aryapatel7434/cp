#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=1;

    int current=1;
    for(int r=1;r<n;r++){
        if(a[r] >= a[r-1]){
            current++;
        }
        else{
            current=1;
        }
        ans=max(ans,current);
    }
    cout<<ans<<endl;
 
}