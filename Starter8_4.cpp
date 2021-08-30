#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt","w",stdout)
using namespace std;
int main()
{ 
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll N,K;
        cin>>N>>K;
        string s;
        cin>>s;
        ll cnt=0;
        int flag=0;
        int n=s.length();
        int first=1;
        ll last;
        ll i;
        string r="";
        for(i=0;i<n;i++)
        {
            
            if(s[i]=='1' && first==0)
            {
                ll res=abs((i+1)-last);
                

                if(i==n-1)
                {
                    char temp = s[i];
                    s[i]=s[i-1];
                    s[i-1]=temp;
                }
                else 
                {
                if(res<=K)
                {
                    last=i+1;
                }
                else if(res-K==1)
                {
                    
                    // s[i-1]=1;
                    // s[i]=0;
                    char temp = s[i];
                    s[i]=s[i-1];
                    s[i-1]=temp;
                    last=i+1;
                }
                else
                {
                    // s[i]=0;
                    // s[i+1]=1;
                    char temp = s[i];
                    s[i]=s[i+1];
                    s[i+1]=temp;
                    last=i+1+1;
                }
                }
                
            }
            if(s[i]=='1' && first==1)
            {
                first=0;
                if(s[i+1]=='0')
                {
                    char temp = s[i];
                    s[i]=s[i+1];
                    s[i+1]=temp;
                }
                last=i+1+1;
                
            }
        }
        // cout<<s<<endl;


        cnt=1;
        for(i=0;i<n;i++)
        {
            
            if(s[i]=='1' && first==0)
            {
                ll res=abs((i+1)-last);
                

                if(res<=K)
                {
                    
                }
                else if(res>K)
                {
                    cnt++;
                }
                last=i+1;
            }
            if(s[i]=='1' && first==1)
            {
                first=0;
                last=i+1;
                
            }
        }
        
        cout<<cnt<<endl;
    }
}
