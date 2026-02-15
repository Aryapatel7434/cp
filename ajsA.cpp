#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // simulate allowed swaps
        for (int i = n; i >= 1; i--) {
            int cur = i;
            while (cur % 2 == 0 && a[cur] < a[cur / 2]) {
                swap(a[cur], a[cur / 2]);
                cur /= 2;
            }
        }

        // check if sorted
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (a[i] != i) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
