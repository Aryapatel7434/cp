#include<bits/stdc++.h>
using namespace std;
//this is a checker fun work as i pass mismatch pair value x and i apply the Two pointer logic and remove this all x value and check remaning array is palinfrome or not.
bool check(vector<int>&a,int x){
     int l=0,r=a.size()-1;
     while(l<r){
        //this is a skip for element.
        if(a[l]==x){l++;continue;}
        if(a[r]==x){r--;continue;}
        //this is a for palindrome
        if(a[l]!=a[r]) return false;
        l++;r--;
     }
     return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int l=0,r=n-1;
        while(l<r && v[l]==v[r]){
            //this is for palindrome
            l++;
            r--;
        }
        if(l>=r){
            cout<<"YES"<<endl;
            continue;
        }
        //find mismatch pair so i check
        int x=v[l];
        int y=v[r];

        if(check(v,x)||check(v,y)) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

        
    }
}