#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=stoi(s);
         int root=sqrt(a);
        if(root*root==a)
        {
        cout<<0<<" "<<root<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}