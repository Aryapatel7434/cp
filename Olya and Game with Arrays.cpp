#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        vector<long long>second_elements;
        long long lowest_first_minimum=INT_MAX;

        for(int i=0;i<n;i++){
            long long m;
            cin>>m;
            vector<long long>a(m);
            for(auto &x:a){
                cin>>x;
            }
                sort(a.begin(),a.end());//o(mlogm)

                second_elements.push_back(a[1]);
                lowest_first_minimum=min(lowest_first_minimum,a[0]);
            }
            sort(second_elements.begin(),second_elements.end());

            long long sum_of_second_elements=accumulate(second_elements.begin(),second_elements.end(),0LL);
        //    long long sum_of_second_elements;
        //    for(int i=0;i<second_elements.size();i++){
        //       sum_of_second_elements+=second_elements[i];
        //    }

            long long lowest_second_minimum=second_elements[0];

            long long answer=lowest_first_minimum+sum_of_second_elements-lowest_second_minimum;
            cout<<answer<<endl;
        }
    }
    //tc is 0(mlogn);
