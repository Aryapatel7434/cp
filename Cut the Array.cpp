#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> prefix(n);
        prefix[0] = a[0] % 3;
        for(int i = 1; i < n; i++)
            prefix[i] = (prefix[i-1] + a[i]) % 3;

        bool found = false;
        int l_ans = 0, r_ans = 0; 

        for(int l = 0; l < n-2 && !found; l++) {
            for(int r = l+1; r < n-1 && !found; r++) {
                int s1 = prefix[l];
                int s2 = (prefix[r] - prefix[l] + 3) % 3;
                int s3 = (prefix[n-1] - prefix[r] + 3) % 3;

                if((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
                    l_ans = l + 1; 
                    r_ans = r + 1;
                    found = true;
                }
            }
        }

        cout << l_ans << " " << r_ans << "\n";
    }

    return 0;
}
