#include<bits/stdc++.h>
using namespace std;
bool fun(int H[],int n)
{
    int i;
    
    for(i=1;i<=7;i++)
    {
        if(H[i]==1)
        {
            continue;
        }
        else if(H[i]==0)
        {
            return false;

        }
    }
    return true;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int H[8]={0};
        int z;

        for(i=0;i<n;i++)
        {
            H[A[i]]=1;
            if(fun(H,8)==1)
            {
                z=i+1;
                break;

            }
        }
        cout<<z<<endl;
    }
}