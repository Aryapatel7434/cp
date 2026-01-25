#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 998244353;
static const int MAXN = 200000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute factorials
    vector<long long> fact(MAXN + 1);
    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

   int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        long long D = 0;       // total deletions
        long long ways = 1;

        int n = s.size();
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && s[j] == s[i]) j++;

            int len = j - i;
            D += (len - 1);
            ways = (ways * len) % MOD;

            i = j;
        }

        ways = (ways * fact[D]) % MOD;

        cout << D << " " << ways << "\n";
    }

    return 0;
}
