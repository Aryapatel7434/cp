#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();

        vector<string>target={"00","25","50","75"};
        int minp=INT_MAX;
        for(string t:target){
            char x=t[1],y=t[0];

            int pos1=-1,pos2=-1;

            //find second char from right
            for(int i=n-1;i>=0;i--){
                if(s[i]==x){
                    pos2=i;
                    break;
                }
            }
            if(pos2==-1) continue;

            for(int i=pos2-1;i>=0;i--){
                if(s[i]==y){
                    pos1=i;
                    break;
                }
            }
            if(pos1==-1) continue;

            minp=min(minp,(n-pos2-1)+(pos2-pos1-1));
        }
        cout<<minp<<endl;
    }
}