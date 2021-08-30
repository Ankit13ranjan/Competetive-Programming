#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt","w",stdout);
using namespace std;
int main()
{ 
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;

        set<int>s;

        s.insert(a1);
        s.insert(a2);
        s.insert(a3);
        s.insert(a4);

        if(s.size()==4)
        {
            cout<<2<<endl;
        }
        else if(s.size()==3)
        {
            cout<<2<<endl;
        }
        else if(s.size()==2)
        {
            if((a1==a2 && a2==a3) || (a2==a3 && a3==a4) || (a3==a4 && a4==a1) || (a4==a1 && a1==a2))
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else if(s.size()==1)
        {
            cout<<0<<endl;
        }
    }
}
