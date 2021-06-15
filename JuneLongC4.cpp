#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
            ll n,m;
        cin>>n>>m;
       vector <int> a(n+1);
       int i,j;
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
       }

       int pre_right=-1;
       int pre_left=-1;

       vector <int> min_right(n+1,INT_MAX) , min_left(n+1,INT_MAX);


       for(i=1;i<=n;i++)
       {
           if(a[i]==1)
           {
               pre_right=i;
           }
           if(pre_right!=-1)
           {
               min_right[i]=i-pre_right;
           }
       }

       for(j=n;j>=1;j--)
       {
           if(a[j]==2)
           {
               pre_left=j;
           }
           if(pre_left!=-1)
           {
               min_left[j]=pre_left-j;
           }
       }

       while(m--)
       {
           int destination;
           cin>>destination;

           int ans= min(min_left[destination],min_right[destination]);

           if(ans==INT_MAX)
           {
               ans=-1;
           }
           if(destination==1)
           {
               ans=0;
           }

           cout<<ans<<" ";
           
       }
       cout<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        
        solve();
        


    }
}