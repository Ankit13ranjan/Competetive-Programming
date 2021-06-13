#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll=long long int;

ll fst_expo(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b%2==1)
        {
            ans=(ans*a)%MOD;
        }
        a=(a*a)%MOD;
        b=b/2;
    }
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
       
        
       
        
        ll a=fst_expo(2,n)-1;
        ll ans=fst_expo(a,m);
        cout<<ans<<endl;
        
    }
    return 0;
}