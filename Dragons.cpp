#include <bits/stdc++.h>
using namespace std;

int main() {

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);

    for (int i = 0; i < n; i++) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++) {

        int strength = dragons[i].first;
        int bonus = dragons[i].second;

        if (s <= strength) {
            cout << "NO" << endl;
            return 0;
        }

        s += bonus;
    }

    cout << "YES" << endl;

    return 0;
}