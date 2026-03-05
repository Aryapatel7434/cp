#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        long long ans = a[0];

        if (k >= 3) {
            cout << 0 << "\n";
            continue;
        }

        long long mindiff = LLONG_MAX;

        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                mindiff = min(mindiff, abs(a[i] - a[j]));

        ans = min(ans, mindiff);

        if (k == 1) {
            cout << ans << "\n";
            continue;
        }

        // k == 2
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long d = abs(a[i] - a[j]);

                int pos = lower_bound(a.begin(), a.end(), d) - a.begin();
               //check 2 possible ans and return the minumum ans .
                if (pos < n)
                    ans = min(ans, abs(a[pos] - d));

                if (pos > 0)
                    ans = min(ans, abs(a[pos - 1] - d));
            }
        }

        cout << ans << "\n";
    }
}