//logic of code is ex i first count 1 and count 0 okay like ex 111100 so count0=2,count1=4 okay so i full fill the condition si!=ti,1->0,1->0. so 0 is end so i canot full other 4 character so i delete the 4 character and is 4
#include<bits/stdc++.h>
using namespace std;
//
int main()
{
  int t;
  cin>>t;
  while(t--){
	  string s;
	  cin>>s;
	  int n=s.length();
	  int count0=0;
	  int count1=0;
	  for(int i=0;i<n;i++){
		if(s[i]=='0') count0++;
		else count1++;
	  }
	  int size=0;
	  for(int i=0;i<n;i++){
		if(s[i]=='0' && count1>0){
			count1--;
			size++;
		}
		else if(s[i]=='1'&& count0>0){
			count0--;
			size++;
		}
		else{
			break;
		}
	  }
	  cout<<n-size<<endl;
  }
}