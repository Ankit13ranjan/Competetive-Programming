#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
int main()
{
    fast;
     ll t;
    cin>>t;
    while(t--)
    {
        int N;
        ll K;
        cin>>N>>K;
        ll X=pow(2,N);
        ll count=0;
        ll sum=0;
        sum=min(K,X/2);
        ll sum2 = X-1;
        ll res = sum*sum2;
        cout<<res*2<<endl;
    }
}
