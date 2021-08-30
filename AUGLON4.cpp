#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt","w",stdout)
using namespace std;
int main()
{ 
    fast;
    int NNN;
    cin>>NNN;
    while(NNN--)
    {
        int n;
        cin>>n;
        int cnt=0;
        
        for(int c=1;c<=n;c++)
        {
            for(int b=c;b<=n;b+=c)
            {
               if(b%c==0)
               {
                   for(int a=c;a<=n;a+=b)
                    {
                        if(a%b==c)
                        {
                            cnt++;
                        }
                    }
               }
                
            }
        }
        cout<<cnt<<endl;
    }
}
