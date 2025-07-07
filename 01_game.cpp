#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count0=0;
		int count1=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1') count1++;
			else count0++;
		}
		int moves=min(count0,count1);
		if(moves%2==1){
			cout<<"DA"<<endl;
		}
		else{
			cout<<"NET"<<endl;
		}
		}
	}
