#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, t;
    cin >> n >> t;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    int sum = 0;
    int ans = 0;

    for (int right = 0; right < n; right++) {

        // Add current book
        sum += a[right];

        // Shrink window if time exceeds t
        while (sum > t) {
            sum -= a[left];
            left++;
        }

        // Current valid window length
        ans = max(ans, right - left + 1);
    }

    cout << ans << endl;

    return 0;
}