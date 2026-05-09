#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        bool allSame = true;
        for (char ch : s) {
            if (ch != c) {
                allSame = false;
                break;
            }
        }

        if (allSame) {
            cout << 0 << endl;
            continue;
        }

        int ans = -1;

        for (int x = 1; x <= n; x++) {
            bool ok = true;

            for (int i = x; i <= n; i += x) {
                if (s[i - 1] != c) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                ans = x;
                break;
            }
        }

        if (ans != -1) {
            //if x=2 become true means all divisble 2 postion is hold char c so another remaing postion which is not divisble by 2 in operation transfer into c.
            cout << 1 << endl;
            cout << ans << endl;
        } else {
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
        }
    }

    return 0;
}