#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
         
            cout << 0 << "\n";
            continue;
        }

        if (a > b) {
           
            long long x = a ^ b;
            if (x <= a) {

                cout << 1 << "\n" << x << "\n";
            } else {

                cout << 2 << "\n" << a << " " << (a ^ b) << "\n";
            }
        } else {
           
            long long diff = b - a;
            if (diff % 2 == 0) {
               
                cout << 2 << "\n" << diff/2 << " " << (a + diff/2) << "\n";
            } else {
               
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}
