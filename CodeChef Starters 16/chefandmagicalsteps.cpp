#include<bits/stdc++.h>
using namespace std;
vector<int>prime(10000000,1);
vector<int> ans(10000000, 0);
void sieve()
{
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<=10000000;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=10000000;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    for (int p = 2; p <= 10000000; p++)
    {
        ans[p] = ans[p - 1] + prime[p];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    int t;
    cin>>t;  
    while(t--)
    {
        int x,y;
        cin>>x>>y;
         if (x == 1 and y == 2)
        {
            cout << 1 << "\n";
            return 0;
        }
        else if (x == 1 and y == 3)
        {
            cout << 2 << "\n";
            return 0;
        }
        else if (x == 2 and y == 3)
        {
            cout << 1 << "\n";
            return 0;
        }
        
          int count = 0;
        int p1 = ans[x + 1];
        int p2 = ans[y];
        int to = p2 - p1;
    
        count = (y - x) - to;
         cout<<count<<"\n";
    }
    return 0;
}