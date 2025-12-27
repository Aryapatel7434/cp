#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();

        //Make circular
        string d=s+s;
        int curr=0,l=0;

        for(char c:d){
            if(c=='1'){
                curr++;
                l=max(l,curr);
            }
            else{
                curr=0;
            }
        }
        //this condition for Not outofboubd
        l=min(n,l);

        long long ans=0;
        //find the area using math formula
        for(int h=1;h<=l;h++){
            ans=max(ans,1LL*h*(l-h+1));//(l-h+1) for find width and h is hight so formula rectangle=height*width
        }
        cout<<ans<<endl;
    }
}