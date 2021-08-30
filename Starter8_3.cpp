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
        ll N,M,Q;
        cin>>N>>M>>Q;

        int flag=0;
        set<int>s1;
        while(Q--)
        {
            char r1;
            ll newvalue;
            cin>>r1;
            cin>>newvalue;
            
            if(r1=='+')
            {
                
                if(s1.find(newvalue)!=s1.end())
                {
                    flag=1;
                    
                }
                else
                {
                    s1.insert(newvalue);
                    if(s1.size()>M)
                    {
                        flag=1;
                        
                    }
                }
            }
            else if(r1=='-')
            {
                if(s1.find(newvalue)!=s1.end())
                {
                    s1.erase(newvalue);
                    
                }
                else
                {
                    flag=1;
                    
                }
            }
            
        }
        if(flag==1)
        {
            cout<<"Inconsistent"<<endl;
        }
        else
        {
            cout<<"Consistent"<<endl;
        }
    }
}
