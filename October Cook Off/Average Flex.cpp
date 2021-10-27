#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int l=0,m=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {   
                if(i!=j)
                {
                if(a[i]>=a[j])
                {
                    l++;
                }
                else
                {
                    m++;
                }
                }
            }
            if(l>=m)
            cnt++;
            l=0;
            m=0;
        }
        cout<<cnt<<endl;
    }
    return 0;
}