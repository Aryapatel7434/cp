#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        map<char, int> mp1, mp2;

        for (auto ch : s) mp1[ch]++;
        for (auto ch : t) mp2[ch]++;

        bool flag = true;

        if (mp1 != mp2) flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
