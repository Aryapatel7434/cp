#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        bool ok = true;
        for (auto &p : freq) {
            if (p.second > 1) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        sort(a.rbegin(), a.rend());

        for (int i = 0; i < n; i++) {
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}