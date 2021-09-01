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
        ll arr1[n];
        ll mx=INT_MIN;
        ll mi=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            
            
        }


        ll count=0;
        for(i=n-1;i>=1;i--)
        {
            if(arr[i]>mx)
            {
                count++;
                mx=arr[i];
            }
        }
        if(arr[0]>=mx)
        {
            cout<<count<<endl;
        }
        else 
        {
            cout<<-1<<endl;
        }

    }
    
}
