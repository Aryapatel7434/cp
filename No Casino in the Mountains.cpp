#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
    //    //M_1 //TC is o(n.k)-> k is small so consider liniear but K is large so TC is o(n^2).
    //     int count=0;
    //     int i=0;
    //     while(i+k<=n){
    //         bool flag=true;
    //         for(int j=i;j<i+k;j++){
    //             if(v[j]==1)
    //             {
    //                 flag=false;
    //                 break;
    //             }
    //         }
    //         if(flag){
    //             count++;
    //             i+=k+1;
    //         }
    //         else{
    //             i++;
    //         }
    //     }
    //     cout<<count<<endl;
       
     //M-2 sliding window TC is o(n)

     
        int hikes = 0;
        int rainy = 0;

        // First window
        for (int i = 0; i < k; i++) rainy += v[i];

        int i = 0;
        while (i + k <= n) {
            if (rainy == 0) {
                hikes++;
                i += k + 1; // take hike + rest day
                if (i + k <= n) {
                    // reset rainy for new window
                    rainy = 0;
                    for (int j = i; j < i + k; j++) rainy += v[j];
                }
            } else {
                // slide window by 1
                rainy -= v[i];
                rainy += v[i + k];
                i++;
            }
        }

        cout << hikes <<endl;
    }
}