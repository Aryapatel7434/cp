#include <bits/stdc++.h>
using namespace std;
//here function finds gcd of two functions
long long gcdLL(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long g = a[0];
        for (int i = 1; i < n; i++) {
            g = gcdLL(g, a[i]);
        }
        
        long long ans = -1;
        for (long long x = 2; x <= 1000000000000000000LL; x++) {
            if (__gcd(x, g) == 1) {
                ans = x;
                break;
            }
            if (x > (g + 100)){
                 break;
            }
        }
        cout << ans << "\n";
    }
  return 0;
}