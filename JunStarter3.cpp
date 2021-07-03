#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n=n*3;
        string s;
        int x;
        unordered_map <string,int> m;
        int i;
        while(n--)
        {
            cin>>s;
        
            cin>>x;
        
            m[s]=m[s]+x;
        }
        vector <long long int> v;
        for(auto it:m)
        {
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
}