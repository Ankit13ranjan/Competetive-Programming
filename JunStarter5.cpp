#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    int i;
    cin>>n>>q;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long int>v;
    while(q--)
    {
        int l,r,x;
        int I;
        cin>>I;
        if(I==1)
        {
            cin>>l>>r>>x;
            long long int s=l-1;
            long long int len=r;
            for(i=s;i<len;i++)
            {
                long long int z=a[i]+(x+i-l)*(x+i-l);
                v.push_back(z);
            }
            for(i=len;i<n;i++)
            {
                v.push_back(a[i]);
            }
        }
        else if(I==2)
        {
            long long int y;
            cin>>y;
            cout<<v[y-1]<<endl;
        }
    }
}