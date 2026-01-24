#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        unordered_map<int,int>primecount;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
             //Prime factorization of x.
            for(int p=2;p*p<=x;p++){
                while(x%p==0){
                    primecount[p]++;
                    x/=p;
                }
            }//if x=13 so 13 is divisble by only 13 and for loop runs root(13)=3.46 but end the end x is become 13 so 13 is one prime number consider.
            if(x>1){
                primecount[x]++;
            }
        }
        bool possible=true;
         //check divisiblity condition.
        for(auto &it:primecount){
            if(it.second%n!=0){
                possible =false;//means array all element not become equal.
                break;
            }
        }
       cout<<(possible?"YES\n":"NO\n");
    }
}