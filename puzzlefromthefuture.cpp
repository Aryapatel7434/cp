
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string b;
    cin >> b;

    string a(n, '0');
    int previousSum = -1;

    for (int i = 0; i < n; i++) {
        int bit = b[i] - '0';

        // Prefer the largest possible sum that differs
        // from the previous sum.
        int bestSum = bit + 1;

        if (bestSum == previousSum) {
            bestSum = bit;
        }

        a[i] = char('0' + (bestSum - bit));
        previousSum = bestSum;
    }

    cout << a << '\n';
}

int main() {
  
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}