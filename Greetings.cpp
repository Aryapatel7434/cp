#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll merge_count(vector<ll>&b,int left,int right){
    //apply the merge dort logic
     if(left>=right) return 0;

     int mid=(left+right)/2;

     ll inv=0;
     //divide the hole array.
     inv+=merge_count(b,left,mid);
     inv+=merge_count(b,mid+1,right);

     vector<ll>temp;
    int i=left,j=mid+1;
     while(i<=mid && j<=right){
        if(b[i]<=b[j]){
            temp.push_back(b[i++]);
        }
        else{
            temp.push_back(b[j++]);
            inv+=(mid-i+1);
        }
     }//add remaining element
     while(i<=mid) temp.push_back(b[i++]);
     while(j<=right) temp.push_back(b[j++]);

     for(int k=left;k<=right;k++){
        b[k]=temp[k-left];
     }
     return inv;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<pair<ll,ll>>people(n);

        for(int i=0;i<n;i++){
            cin>>people[i].first>>people[i].second;
        }

        //sort by starting point
        sort(people.begin(),people.end());

        //Extract b array
        vector<ll>b(n);
        for(int i=0;i<n;i++){
            b[i]=people[i].second;
        }
        //count the inversion
        cout<<merge_count(b,0,n-1)<<endl;

    }
}