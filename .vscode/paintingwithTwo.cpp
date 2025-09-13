#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;

        //a>b means blue override red condition means (n-b) is even
        bool red=(n-b)%2==0;

        //b>a means red set symetric that condition n-a is even
        bool blue=(a<=b)||((n-a)%2==0);

        if(red && blue)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}