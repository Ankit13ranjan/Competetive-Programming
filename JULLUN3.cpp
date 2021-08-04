#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
int fun(int X)
{
    int i;
    int sum=0;
    for(i=0;i<X;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll N;
        cin>>N;
        int i;
        ll arr[N];
        int tsum=0;
        unordered_map<int,int>m;
        for(i=0;i<N;i++)
        {
            cin>>arr[i];
            tsum+=i;
            m[arr[i]]++;
        }
        int j;
        
        int count=0;
        
        
        for(auto itr : m)
        {
            if(itr.second==1)
            {
                count+=0;
            }
            else if(itr.second==2)
            {
                count+=1;
            }
            else if(itr.second>2)
            {
                count+=fun(itr.second);
            }
        }
        ll result = tsum-count;
        cout<<2*result<<endl;

        
        
    }
}
