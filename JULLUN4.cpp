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
        ll N;
        cin>>N;
        ll A[N];
        ll B[N];
        ll C[N]={0};
        int i;
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(i=0;i<N;i++)
        {
            cin>>B[i];
        }

        ll mini=INT_MAX;
        for(i=0;i<N;i++)
        {
            ll c = (A[0]+B[i])%N;
            mini=min(mini,c);
        }

        vector<ll>v;

        for(i=0;i<N;i++)
        {
            ll c = (A[0]+B[i])%N;
            if(c==mini)
            {
                v.push_back(i);
            }
        }


        if(v.size()==1)
        {
            ll z = v[0];
            ll j=0;
            for(i=z;i<N;i++,j++)
            {
                cout<<(A[j]+B[i])%N<<" ";
            }
            for(i=0;i<z;i++,j++)
            {
                cout<<(A[j]+B[i])%N<<" ";
            }
        }
        else
        {
            ll j=0;
            int z1=v[0];
            int z2=v[1];
            vector<ll>v1;
            vector<ll>v2;
            for(i=z1;i<N;i++,j++)
            {
                v1.push_back((A[j]+B[i])%N);
            }
            for(i=0;i<z1;i++,j++)
            {
                v1.push_back((A[j]+B[i])%N);
            }
            for(i=z2;i<N;i++,j++)
            {
                v2.push_back((A[j]+B[i])%N);
            }
            for(i=0;i<z2;i++,j++)
            {
                v2.push_back((A[j]+B[i])%N);
            }
            if(v1<v2)
            {
                for(i=0;i<v1.size();i++)
                {
                    cout<<v1[i]<<" ";
                }
            }
            else
            {
                for(i=0;i<v2.size();i++)
                {
                    cout<<v2[i]<<" ";
                }
            }
        }
        
    }
}
