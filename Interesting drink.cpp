#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q;
    cin>>q;
    sort(a.begin(), a.end());

    while (q--) {
        int x;
        cin >> x;

        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (a[mid] <= x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << low <<endl;
    }

    return 0;
}