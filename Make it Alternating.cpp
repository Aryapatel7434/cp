#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //forward
        int count1=0;
        int index1=1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                count1++;
                index1++;
            }
        }
        //backward
        for(int i=s.length()-1;i>0;i--){
            if(s[i]==s[i-1]){
                count1++;
                index1++;
            }
        }
        cout<<index1<<" "<<count1<<endl;
    }
}