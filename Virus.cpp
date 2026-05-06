#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int>arr(m);
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        vector<long long>gaps;

        for(int i=1;i<m;i++){
            gaps.push_back(arr[i]-arr[i-1]-1);
        }
        //circular gap
        gaps.push_back((n-arr[m-1])+(arr[0]-1));

        sort(gaps.rbegin(),gaps.rend());

        long long days=0;
        long long saved=0;

        for(auto gap:gaps){
            long long remaining=gap-2*days;

            if(remaining<=0) continue;

            if(remaining==1){
                saved+=1;
                days+=1;
            }
            else{
                saved+=remaining-1;
                days+=2;
            }
        }
        cout<<n-saved<<endl;


    }
}