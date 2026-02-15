#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    // adjacency matrix: adj[x][y] = true if x and y are adjacent
    bool adj[7][7];
    memset(adj, false, sizeof(adj));

    // build adjacency (not same, not opposite)
    for (int x = 1; x <= 6; x++) {
        for (int y = 1; y <= 6; y++) {
            if (x != y && x + y != 7) {
                adj[x][y] = true;
            }
        }
    }

    const int INF = 1e9;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // dp arrays (rolling)
        vector<int> prev(7, INF), cur(7, INF);

        // base case (i = 1)
        for (int f = 1; f <= 6; f++) {
            prev[f] = (f == a[1] ? 0 : 1);
        }

        // DP transitions
        for (int i = 2; i <= n; i++) {
            fill(cur.begin(), cur.end(), INF);

            for (int f = 1; f <= 6; f++) {
                int cost = (f == a[i] ? 0 : 1);

                for (int g = 1; g <= 6; g++) {
                    if (adj[g][f]) {
                        cur[f] = min(cur[f], prev[g] + cost);
                    }
                }
            }
            prev.swap(cur);
        }

        // answer
        int ans = *min_element(prev.begin() + 1, prev.end());
        cout << ans << "\n";
    }

    return 0;
}
