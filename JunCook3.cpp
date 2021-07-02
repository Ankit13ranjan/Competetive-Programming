#include<bits/stdc++.h>
#define ll long long int
#define faster ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
string fun(ll A[],ll x,ll n)
{
    int i;
    ll count=0;
        int f=0;
        for(i=0;i<n;i++)
        {
            if(x-A[i]>0)
            {
                count++;
            }
            if(x-A[i]==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            return "0";
        }
        else if(count%2!=0)
        {
            return "NEGATIVE";
        }
        else if(count%2==0)
        {
            return "POSITIVE";
        }   
}
int main()
{
    faster;
    ll n,q;
    cin>>n>>q;
    ll A[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    while(q--)
    {
        ll x;
        cin>>x;
        cout<<fun(A,x,n)<<endl;
        
    }
}