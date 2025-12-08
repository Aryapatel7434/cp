#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int ans=0;

        //main logic is my entire array all element become last element so i travrse on the reverse order and find length of the same element and this length is my max length consider.
        int i=n-1;

        while(i>=0 && v[i]==v[n-1]){
            i--;
        }

        if(i==-1){
            cout<<0<<endl;//means array all elemnts are same.
            continue;
        }
        //perform the op
        while(i>=0){
            i-=(n-i-1);//this means like i find 2 same element so i move i into again next 2 step becouse a(l+i)=a(k+l+i) related i convert my array elennt this type element.
            ans++;//his is a operation.
            while(i>=0 && v[i]==v[n-1]){
                i--;
            }

        }
        cout<<ans<<endl;
        //Tc is 0(n) & Sc is 0(n).
    }
}