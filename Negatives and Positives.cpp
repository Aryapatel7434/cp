#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int neg=0;
        long long mn=LLONG_MAX;
        //logic is main like in array exist odd Number of negative element so 1 element is always remain Negative so this Negtive element i select smaallest ele so my maximum sum effect minor
        //Negative ele is even so mu all pair became positive i perform multiple op so i become all element is positive.
        for(int i=0;i<n;i++){
            if(v[i]<0) neg++;
            sum+=llabs(v[i]);
            mn=min(mn,llabs(v[i]));//i find smallest element and this element i sub so Not major effect my ans.
        }
        if(neg%2==0){
            cout<<sum<<endl;//i perform multiple op and i become my array positive.
        }
       else{
          cout<<sum-2*mn<<endl;//one Negative element Exist.
       }
        
    }
}