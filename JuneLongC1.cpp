#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int xa,xb,XA,XB;
        cin>>xa>>xb>>XA>>XB;
        int A,B;
        A=XA/xa;
        B=XB/xb;
        cout<<A+B<<endl;
    }
}