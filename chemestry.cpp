#include<iostream>

#include<unordered_map>

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

    unordered_map<char,int>m;

    for(char a:s){

      m[a]++;

    }

    int oddfrequency_char=0;

    for(auto &pr:m){

       if((pr.second)%2!=0){

        oddfrequency_char++;

       }

    }

    if(oddfrequency_char>k+1){

      cout<<"NO"<<endl;

    }

    else{

      cout<<"YES"<<endl;

    }

  }









}