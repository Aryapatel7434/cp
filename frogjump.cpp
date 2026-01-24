#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        int64 x;
        cin >> n >> x;

        vector<int64> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i] >> c[i];
        }

        // Step 1: distance reachable without rollbacks
        int64 free_dist = 0;
        for (int i = 0; i < n; i++) {
            free_dist += (b[i] - 1) * a[i];
        }

        if (free_dist >= x) {
            cout << 0 << "\n";
            continue;
        }

        // Step 2: find best jump for rollback usage
        int64 best_gain = 0;
        for (int i = 0; i < n; i++) {
            int64 gain = b[i] * a[i] - c[i];
            best_gain = max(best_gain, gain);
        }

        // Step 3: if no positive gain, impossible
        if (best_gain <= 0) {
            cout << -1 << "\n";
            continue;
        }

        // Step 4: compute rollbacks needed
        int64 need = x - free_dist;
        int64 rollbacks = (need + best_gain - 1) / best_gain;

        cout << rollbacks << "\n";
    }

    return 0;
}
