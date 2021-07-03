#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int l,h;
        cin>>l>>h;
        string s;
        cin>>s;
        int i;
        int count=0;
        int count1=0;
        int x=0;
        int f=0;
        int r=h;
        for(i=0;i<l;i++)
        {
            if(s[i]=='0')
            {
                count1++;
                x=1;
            }
            if(s[i]=='1' && x==1)
            {
                x=1;
                if(count1>=h/2)
                {
                    h=2*(h-count1);

                    count1=0;
                    
                }
            }
            if(count1>=h)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}