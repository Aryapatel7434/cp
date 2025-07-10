#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << " " << 0 << endl;
        } else {
            int d = abs(a - b);
            int moves = min(a % d, d - a % d);
            cout << d << " " << moves << endl;
        }
    }
    return 0;
}
