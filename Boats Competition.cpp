
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    // Try every possible target sum.
    for (int sum = 2; sum <= 2 * n; sum++) {
        vector<int> freq(n + 1, 0);

        for (int weight : a) {
            freq[weight]++;
        }

        int boats = 0;

        for (int x = 1;x<=n && x < sum - x; x++) {
            int y = sum - x;

            if(y > n){
                continue;
            }
            boats += min(freq[x], freq[y]);
        }

        if (sum % 2 == 0) {
            boats += freq[sum / 2] / 2;
        }

        ans = max(ans, boats);
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
