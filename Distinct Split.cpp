#include<bits/stdc++.h>
using namespace std;
int main(){
    //this q  i apply logic of prefix and suffix 
    //s1,s2,s3,s4.....sn this is my string so i bifergation this string into 2 parts okay and 0 to i is prefix and n to i+1 is my suffix;
    //a b c a b c d prefix[i]= 1 2 3 3 3 3 4 and suffix[i]= 4 4 4 4 3 2 1  
    //like o to i is my prefix part so i+1 to n is my suffix part

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        unordered_set<char>st;//this is for uniqmess and constant TC
        vector<long long>prefix_sum_count(n+1,0);
        vector<long long>suffix_sum_count(n+1,0);

        for(long long i=1;i<=n;i++){
            st.insert(s[i-1]);
            prefix_sum_count[i]=st.size();
        }
        st.clear(); //for reuse purpose

        for(long long i=n;i>=1;i--){
            st.insert(s[i-1]);
            suffix_sum_count[i]=st.size();
        }

        long long ans=0;
        for(long long i=0;i<n;i++){
            ans=max(ans,prefix_sum_count[i]+suffix_sum_count[i+1]);
        }
        cout<<ans<<endl;
    }

}