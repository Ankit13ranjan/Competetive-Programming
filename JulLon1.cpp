#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int D=7;
        int m1=D*x;
        int m2=y*d+z*(D-d);
        int react=max(m1,m2);
        cout<<react<<endl;
    }
}