#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
     int n;
	 cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++){
		cin>>a[i];
	 }
	 int b=0;
	 for(int i=0;i<n;i++){
	    
	}
		cin>>a;
		string s;
		cin>>s;
		for(int i=0;i<a;i++){
            if(s[i]=='U') 
			{
				i+=1;;
			}
			else{
				i-=1;
			}
			vector<int>v(n);
		   for(int i=0;i<n;i++){
		   if(a[i]>5){
			v[i]=abs(i)+a[i];
		}
		else{
			v[i]=a[i]-abs(i);
		}
	}
	    for(int i=0;i<n;i++){
			if(v[i]>9){
				v[i]=v[i]%10;
			}
		}

	}

	 }
	 
	 

	}
}