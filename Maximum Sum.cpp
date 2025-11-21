#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        int l = 0, r = n - 1;

        while (k--) {
            long long remove_two_min = a[l] + a[l + 1];
            long long remove_max = a[r];

            if (remove_two_min < remove_max) {
                l += 2;      // delete two smallest
            } else {
                r--;         // delete max
            }
        }

        long long sum = 0;
        for (int i = l; i <= r; i++)
            sum += a[i];

        cout << sum << "\n";
    }

    return 0;
}
