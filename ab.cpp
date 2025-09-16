#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        if(n<4 || n%2==1){
            cout<<-1<<endl;
            continue;
        }
       long long maxbus=n/4;
       long long mn;
       if(n%6==0) mn=n/6;
       else mn=n/6+1;//cover both r=2 and r=4 case
       cout<<mn<<" "<<maxbus<<endl;
    }

}