#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        stack<char>st;

        int count=0;
        for(int i=0;i<s.length();i++)
        {
             if(!st.empty()&&st.top()=='('&&s[i]==')'){
              st.pop();
          }
          else{
            st.push(s[i]);
    
        }
       while(!st.empty()){
         if(st.top()==')') count++;
         st.pop();
        }

        cout<<count<<endl;
       
        }
    }
