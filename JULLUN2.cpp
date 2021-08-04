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
        ll N,D,H;
        cin>>N>>D>>H;
        ll arr[N];
        int i;
        for(i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        int f=0;
        for(i=0;i<N;i++)
        {
            if(arr[i]!=0)
            {
                count+=arr[i];
                if(count>H)
                {
                    f=1;
                    break;
                }

            }
            else
            {
                if(count>=D)
                {
                    count-=D;
                }
                else if(count<D)
                {
                    count=0;
                }
                if(count>H)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
        }
        else if(f!=1)
        {
            cout<<"NO"<<endl;
        }
    }


}
