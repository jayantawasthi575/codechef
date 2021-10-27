#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,l,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>x;
        int r=n-l;
        int amnt=0;
        if(r>=l)
        {
            amnt=l*x;
        }
        else
        {
            amnt=r*x;
        }
        return amnt;
    }
}