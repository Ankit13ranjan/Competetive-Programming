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
        set<ll>s;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            s.insert(arr[i]-i);
        }
        if(s.size()<n)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        

    }
    
}
