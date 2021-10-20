#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        string c;
        cin>>c;
        int al=0;
        int max=0;
        int count=0;
        for(int i=0;i<c.size();i++)
        {
            if(c[i]=='1')
            {
                al++;
                count++;
            }
            else
            {
                if(al>max)
                max=al;
                al=0;
            }
        }
        if(al>max)
            max=al;
        //cout<<count<<" "<<max;
        cout<<(count*x+max*y)<<endl;
    }
    return 0;
}