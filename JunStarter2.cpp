#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int res=2*(180+n);
        res=res-(a+b);
        cout<<res<<endl;
    }
}