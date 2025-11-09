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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int sum=0;
        int ans=INT_MIN;

        int i=0;
        int j=0;
        //main logic is Even & odd element between perform the Xor op so last bit always find->1.
        //8^9=_____1.this type and odd&odd and Even&Even so ans is ____0.
        //apply the logic of kadan's algo
        while(j<n){
            if(sum<0){//this is a logic of kadan's algo.
                sum=0;
                i=j;
            }
            if(i<j){
                if((v[j]^v[j-1])&1){
                    sum+=v[j];
                }
                else{
                    sum=v[j];
                    i=j;
                }
            }
            else{
                sum=v[j];
                i=j;
            }
        ans=max(ans,sum);//ipdte the ans variable
        j++;
    }
    cout<<ans<<endl;
}
       
}




