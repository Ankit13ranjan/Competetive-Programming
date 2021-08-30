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
        ll G1,G2,S1,S2,B1,B2;
        cin>>G1>>S1>>B1>>G2>>S2>>B2;
        ll sum1=0;
        ll sum2=0;
        sum1=G1+S1+B1;
        sum2=G2+S2+B2;
        if(sum1>sum2)
        {
            cout<<1<<endl;
        }
        else if(sum2>sum1)
        {
            cout<<2<<endl;
        }
    }
}
