#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>p;
        int sum=0;
        sum=sum+(n-x)*-1;
        sum=sum+3*x;
        if(sum>=p)
        cout<<"PASS";
        else
        cout<<"FAIL";
    }
    return 0;
}