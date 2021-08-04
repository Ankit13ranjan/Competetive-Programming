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
        ll a[3];
        int i;
        ll sum;
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        sum = a[1]+a[2];
        cout<<sum<<endl;
    }
}
