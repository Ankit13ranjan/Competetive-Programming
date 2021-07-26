#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int sum=0;
        sum=x+y;
        if(sum<3)
        {
            cout<<1<<endl;
        }
        else if(sum>=3 && sum<=10)
        {
            cout<<2<<endl;
        }
        else if(sum>=11 && sum<=60)
        {
            cout<<3<<endl;
        }
        else if(sum>60)
        {
            cout<<4<<endl;
        }
    }
}