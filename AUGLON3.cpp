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
    ll res;
    cin>>t;
    while(t--)
    {
        ll n,p,k;
        cin>>n>>p>>k;
        


        ll q=p%k;
        q--;


        res=0;
        ll s=(((n-1)/k)*k);
        s=n-1-s;
        if(s>q)
        {
            res+=((n-1)/k+1)*(q+1);
        }
        else
        {
            res+=(s+1)*((n-1)/k+1)+(q-s)*((n-1)/k);
        }

        ll i;
        for(i=q+1;i<n;i+=k)
        {
            res++;
            if(i==p)
            {
                cout<<res<<endl;
                break;
            }
        }
    }
}
