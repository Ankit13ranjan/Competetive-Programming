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
        ll E,K;
        cin>>E>>K;
        ll x =E;
        ll cnt=1;
        while(E!=0)
        {
            x=E/K;
            x=floor(x);
            if(x!=0)
            {
                cnt++;
                E=x;
            }
            else if(x==0)
            {
                break;
            }
        }
        cout<<cnt<<endl;
        
    }
}