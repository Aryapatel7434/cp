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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int count1=0;//-1
        int count2=0;//1
        for(int i=0;i<n;i++){
                if(v[i]==-1){
                    count1++;
                }
                else{
                    count2++;
                }
        }
        int ops=0;
        while(count1>count2){
            count1--;
            count2++;
            ops++;
        }

        if(count1%2==1){
            ops++;
        }
        cout<<ops<<endl;
    }
}