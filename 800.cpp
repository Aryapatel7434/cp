#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t; 
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long full = n / 15;
        long long rem = n % 15;
        long long ans = 3 * full + min(3LL, rem + 1);
        cout << ans << "\n";
    }
}
