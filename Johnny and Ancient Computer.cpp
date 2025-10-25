#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestUniqueSubsttr(string s) {
        unordered_map<char, int> mp; // stores last index of each character
        int maxLen = 0;
        int start = 0; // left boundary of the current window

        for (int end = 0; end < s.length(); end++) {
            char ch = s[end];

            // if character already seen & is inside current window
            if (mp.find(ch) != mp.end() && mp[ch] >= start) {
                start = mp[ch] + 1;  // move start after its previous position
            }

            // update last seen index of current char
            mp[ch] = end;

            // calculate window size
            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    }
};

int main() {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.longestUniqueSubsttr(s);
    return 0;
}
