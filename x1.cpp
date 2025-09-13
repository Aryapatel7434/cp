#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n, m;
        string a, b, c;
        cin >> n;   
        cin >> a;   
        cin >> m;   
        cin >> b;   
        cin >> c;   

        deque<char>q(a.begin(),a.end());

        for(int i=0;i<m;i++){
            if(c[i]=='V'){
                q.push_front(b[i]);
            }
            else{
                q.push_back(b[i]);
            }
        }
        string result(q.begin(),q.end());
        cout<<result<<endl;

    }
    return 0;
}
