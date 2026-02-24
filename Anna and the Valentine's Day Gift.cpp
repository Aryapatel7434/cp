#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long m;
        cin>>n>>m;

        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long total_digit=0;
        vector<int>trailingZeros;

        for(int i=0;i<n;i++){
            long long x=a[i];

            //count digit
            long long temp=x;
            int digit=0;
            while(temp>x){
                digit++;
                temp/=10;
            }
            total_digit+=digit;

            //count trailing zeros

            int zeroCount=0;
            while(x%10==0){
                zeroCount++;
                x/=10;
            }
            trailingZeros.push_back(zeroCount);
        }
        //sort descending
        sort(trailingZeros.begin(),trailingZeros.end(),greater<int>());

        long long removed=0;

        //Anna removes alternate largest trainling zeros
        for(int i=0;i<n;i+=2){
            //move is alternate
            removed+=trailingZeros[i];
        }
        long long final_digits=total_digit-removed;

        if(final_digits>=m+1){
            cout<<"sahsha"<<endl;
        }
        else{
            cout<<"Anna"<<endl;
        }
    }
}