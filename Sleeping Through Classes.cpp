#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int cool=0;
        int sleep=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cool=k+1; //means imp class awake i to i+k;
            }
            else{
                if(cool==0){
                    //allowed to sleep;
                    sleep++;
                }
            }
             if(cool>0){
                    cool--;
             }
            }
            cout<<sleep<<endl;
        }

    }
