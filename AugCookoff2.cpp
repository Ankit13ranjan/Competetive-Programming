#include<bits/stdc++.h>
#define ll long long int
#define ld long double
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
        set<string>s;
        ll N;
        cin>>N;
        ll i;
        for(i=0;i<N;i++)
        {
            string S;
            cin>>S;
            s.insert(S);
        }
        
        for(i=0;i<=N;i++)
        {
            int ans=i;
            string res="";
            ll j;
            while(ans)
            {
                res+=to_string(ans%2);
                ans/=2;
            }
            //Here,res id the Binary representation of the i

            reverse(res.begin(),res.end());


            // we, Arrange in correct manner


            //Here,We make binary of length l by adding 0 to the leading side


            ll binsize=res.size();
            string res_final_outcome=string(N-binsize,'0');
            res_final_outcome+=res;

            //Here, We check if the result is present in our set or not .... if not ,then our answer is this string
            if(s.find(res_final_outcome)==s.end())
            {
                cout<<res_final_outcome<<endl;
                break;
            }
            
        }
    }
    
}
