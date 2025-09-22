#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        long long q;
        cin >> n >> k >> q;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        long long ans = 0, len = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] <= q) {
                len++;//find the interval length which temperture is lesss than q
            } else {
                long long m = len - k + 1;//find the exact k size subarray inside interval
                if (m > 0) ans += m * (m + 1) / 2;//total subaary posible for Dima cam go for picnic.
                len = 0;
            }
        }
        //last segment
        long long m = len - k + 1; // last segment
        if (m > 0) ans += m * (m + 1) / 2;

        cout << ans << "\n";
    }
    return 0;
}
