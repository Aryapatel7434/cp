#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int m=0;
        for(int i=0;i<s.length();i++){
           if(s[i]!=s[n-1]){
            m++;
           }
        }
        cout<<m<<endl;
    }
}