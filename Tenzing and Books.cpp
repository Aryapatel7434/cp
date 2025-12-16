#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        int current = 0;
         //& ~x  means convert into binary .
        // Stack A
        for (int i = 0; i < n; i++) {
            if (((current | a[i]) & ~x) == 0)//forbiddent bits not added means safe.
                current |= a[i];//preform the or operation.
            else
                break;
        }

        // Stack B
        for (int i = 0; i < n; i++) {
            if (((current | b[i]) & ~x) == 0) //EX current =0001,x=0101->0001|0101=0011 ->~x=1010 AND->0010 FOrbidden bit added means Not safe.
                current |= b[i];
            else
                break;
        }

        // Stack C
        for (int i = 0; i < n; i++) {
            if (((current | c[i]) & ~x) == 0)
                current |= c[i];
            else
                break;
        }

        cout << (current == x ? "Yes\n" : "No\n");
    }
    return 0;
}
