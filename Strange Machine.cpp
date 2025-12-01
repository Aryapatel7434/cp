#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        vector<long long> A(q);
        for(int i = 0; i < q; i++) cin >> A[i];

        for(int qi = 0; qi < q; qi++){
            long long x = A[qi];
            long long steps = 0;
            int pos = 0;

            while(x > 0){
                if(s[pos] == 'A') x--;
                else x /= 2;

                steps++;
                pos = (pos + 1) % n;
            }

            cout << steps << "\n";
        }
    }
}
