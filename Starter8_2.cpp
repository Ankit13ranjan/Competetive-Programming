#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt","w",stdout)
using namespace std;
int main()
{ 
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n>>a;
        int x=sqrt(n);
        cout<<x*a<<endl;
    }
}
