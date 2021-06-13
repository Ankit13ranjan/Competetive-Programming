#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int D,d,p,q;
        cin>>D>>d>>p>>q;
        ll int final=0,sum=0;
        ll int temp=d;
        ll int last=p;
        while(D!=0)
        {
            if(temp==0)
            {
                last=last+q;
                temp=d;
            }
            sum=last;

            final=final+sum;
            temp--;
            D--;
        }
        cout<<final<<endl;
    }
}