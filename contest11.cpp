#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int R = 0, C = 0, X = 0;
        int mn = min(h, l);

        for (int x : a) {
            if (x <= h) R++;        // usable as row
            if (x <= l) C++;        // usable as column
            if (x <= mn) X++;       // usable as both
        }

        int answer = min(
            min(R, C),
            (R + C - X) / 2
        );

        cout << answer << '\n';
    }

    return 0;
}
