#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt","w",stdout)
using namespace std;
int main()
{ 
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll i;
        unordered_map<int,int> m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        if(n<=2)
        {
            cout<<0<<endl;
        }
        else
        {
            ll max_value_present=INT_MIN;
            for(auto itr:m)
            {
                if(itr.second>max_value_present)
                {
                    max_value_present=itr.second;
                }
            }
            if(max_value_present==1)
            {
                max_value_present++;
            }
            ll end_value_answer=n-max_value_present;
            cout<<end_value_answer<<endl;
            
        }
    }
    
}
