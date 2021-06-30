#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.size();
        int i;
        int f=1;
        if(l>3)
        {
            if(s[0]=='<' && s[1]=='/' && s[l-1]=='>')
            {
                for(i=2;i<l-1;i++)
                {
                    if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                    {
                        f=1;
                    }
                    else
                    {
                        f=0;
                        break;
                    }
                }
                if(f==0)
                {
                    cout<<"ERROR"<<endl;
                }
                else if(f==1)
                {
                    cout<<"SUCCESS"<<endl;
                }
            }
             else
            {   
                cout<<"ERROR"<<endl;
            }   
        } 
        else
        {
            cout<<"ERROR"<<endl;
        }       
    }
}