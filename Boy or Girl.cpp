#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Use a set to store distinct characters
    set<char> st(s.begin(), s.end());

    int distinctCount = st.size();

    if (distinctCount % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
