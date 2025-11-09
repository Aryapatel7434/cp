#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        int ans = 0;
        int streak = 1; // length of same-parity segment

        for(int i = 1; i < n; i++){
            // check same parity (XOR gives 0 when same)
            if(((v[i] ^ v[i-1]) & 1) == 0){
                streak++; // same parity, extend streak
            } else {
                ans += (streak - 1); // merge needed
                streak = 1; // reset
            }
        }
        ans += (streak - 1); // add last segment result

        cout << ans << "\n";
    }
    return 0;
}
