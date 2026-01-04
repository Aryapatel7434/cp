#include<bits/stdc++.h>
using namespace std;
int main(){
    //find kth permutauiom
    string s="123";
    int k=4;
    int cnt=0;
    vector<string>ans;
    sort(s.begin(),s.end());
    do{
        cnt++;
        if(cnt==k){
            ans.push_back(s);
            break;
        }
    }while(next_permutation(s.begin(),s.end()));
    cout<<ans[0]<<endl;


}