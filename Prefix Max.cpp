#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int maxel=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxel=max(maxel,a[i]);
        }
        cout<<maxel*n<<endl;
        

    }
}