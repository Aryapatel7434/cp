#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        for (auto &v : a) cin >> v;

        map<pair<long long, long long>, long long> freq;
        long long ans = 0;

        for (long long v : a) {
            long long rx = v % x;
            long long ry = v % y;

            long long need_rx = (x - rx) % x;

            ans += freq[{need_rx, ry}];
            freq[{rx, ry}]++;
        }

        cout << ans << "\n";
    }
    return 0;
}
