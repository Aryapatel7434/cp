#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long windowsum=0;

    //first window
    for(int i=0;i<k;i++){
        windowsum+=a[i];
    }
    long long totalsum=windowsum;
    for(int i=k;i<n;i++){
        windowsum=windowsum-a[i-k]+a[i];//oldsum-totalsum+newelement add.
        totalsum+=windowsum;
    }
    double result=(double)totalsum/(n-k+1);

    cout<<fixed<<setprecision(10)<<result;

}