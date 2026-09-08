#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<string>ans(n);
    map<string,int>mpp;

    while(n--){
        string s;
        cin>>s;

        if(mpp.find(s)!=mpp.end()){
            //present sting
            cout<<s+to_string(mpp[s])<<endl;
        }
        else{
            cout<<"OK"<<endl;
        }
        mpp[s]++;

    }
   
}
     
