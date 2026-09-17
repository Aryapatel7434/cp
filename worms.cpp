#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<long long>prefix(n);

    for(int i=0;i<n;i++){
        long long worms;
        cin>>worms;

        if(i==0){
            prefix[i]=worms;
        }
        else{
            prefix[i]=prefix[i-1]+worms;
        }
    }
    int m;
    cin>>m;

    while(m--){
        long long query;
        cin>>query;

        int left=0;
        int right=n-1;

        while(left < right){
            int mid=left+(right-left)/2;

            if(prefix[mid] >= query){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        cout<<left+1<<endl;
    }
}