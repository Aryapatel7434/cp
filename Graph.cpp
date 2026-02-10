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

        vector<long long> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        long long maxC = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            c[i] = a[i] - b[i];
            maxC = max(maxC, c[i]);
        }

        vector<int> strong;
        for (int i = 0; i < n; i++) {
            if (c[i] == maxC)
                strong.push_back(i + 1); // 1-based indexing
        }

        cout << strong.size() << "\n";
        for (int v : strong)
            cout << v << " ";
        cout << "\n";
    }

    return 0;
}
