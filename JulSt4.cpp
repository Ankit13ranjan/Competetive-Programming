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
        long double A,B;
        cin>>A>>B;
        long double i,j;
        i=min(A,B);
        j=i+1;

        if(A==B)
        {
            cout<<0<<endl;
            continue;
        }
        int res1=ceil((B-i)/2)+ceil((i-A)/2);
        int res2 = ceil((B-j)/2)+ceil((j-A)/2);

        if(res1>res2)
        {
            cout<<res1<<endl;
        }
        else 
        {
            cout<<res2<<endl;
        }
    }
}