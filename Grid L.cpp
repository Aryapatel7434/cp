#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long p, q;
        cin >> p >> q;

        long long S = p + 2LL * q; 
        long long T = 2LL * S + 1;    

        bool found = false;

        for (long long d = 1; d * d <= T; d++) {
            if (T % d != 0) continue;

            long long a = d;
            long long b = T / d;

            if (a % 2 == 1 && b % 2 == 1) {
                long long n = (a - 1) / 2;
                long long m = (b - 1) / 2;

                if (n >= 1 && m >= 1) {
                    long long maxL = n * m + min(n, m);
                    if (q <= maxL) {
                        cout << n << " " << m << "\n";
                        found = true;
                        break;
                    }
                }
            }
            if (a != b) {
                long long n = (b - 1) / 2;
                long long m = (a - 1) / 2;

                if (n >= 1 && m >= 1) {
                    long long maxL = n * m + min(n, m);
                    if (q <= maxL) {
                        cout << n << " " << m << "\n";
                        found = true;
                        break;
                    }
                }
            }
        }

        if (!found) cout << -1 << "\n";
    }

    return 0;
}