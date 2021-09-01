#include<bits/stdc++.h>
#define ll long long int
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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        ll i;
        ll maxii=INT_MIN;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>maxii)
            {
                maxii=arr[i];
            }
        }
        ll count=0;
        for(i=k-1;i<n;i++)
        {
            if(arr[i]==maxii)
            {
                count+=(n-i);
            }
        }
        cout<<count<<endl;
        
    }
    
}
