#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		while(n%2==0){
			n/=2;//means ex 32/2=16/2=8/2=4/2=1 stop means this n is not store the odd divisor measn ans is always NO.
		}
		if(n>1) cout<<"YES"<<endl;//ex 20 above while loop stop the value is become 5 okay and 5 is store 1,5 divisor and 5 divisior is divisible 5..
		else cout<<"NO"<<endl;
		
	}
}