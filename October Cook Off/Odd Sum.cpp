#include<bits/stdc++.h>
using namespace std;
int main()
{   
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
        long long sum=0;
        if(n<3)
        {
            cout<<1<<"\n";
        }
        else
        {   
            n=n-1;
            sum=(n*n)-n+1;
            cout<<sum<<"\n";
        }
    }
    return 0;
}