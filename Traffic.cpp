// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         char c;
//         string s;
//         cin>>n>>c>>s;

//         if(c=='g'){
//             cout<<0<<endl;//current color is Green means i cross the road;
//             continue;
//         }
//         s=s+s;
//         int ans=0;
        
//         for(int i=0;i<n;i++){
//             if(s[i]==c){
//                 for(int j=i+1;j<i+n;j++){
//                     if(s[j]=='g'){
//                         int dist=j-i;
//                         ans=max(ans,dist);
//                         break;
//                     }
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
// }
//TC o(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        string s;
        cin>>n>>c>>s;

        if(c=='g'){
            cout<<0<<endl;
            continue;
        }

        s+=s;
        int ans=0;
        int lastG=-1;
        for(int i=2*n-1;i>=0;i--){
            if(s[i]=='g') lastG=i;
            if(i<n&&s[i]==c&&lastG!=-1){
                ans=max(ans,lastG-i);
            }
        }
        cout<<ans<<endl;
    }
}
