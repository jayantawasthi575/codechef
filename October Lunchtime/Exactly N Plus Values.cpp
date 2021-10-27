#include <bits/stdc++.h>
using namespace std;
typedef  long long int ll;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll sum=pow(2,n);
	    n=n+1;
	    if(sum==2)
	    {
	        cout<<1<<" "<<1<<endl;
	        continue;
	    }
	    cout<<1<<" "<<1<<" ";
	    sum=sum-2;
	    n=n-2;
	    int k=2;
	    while(sum!=0&&n!=1)
	    {
	      cout<<k<<" ";
	      sum=sum-k;
	      n=n-1;
	      k++;
	    }
	    if(sum!=0)
	    cout<<sum<<endl;
	}
	return 0;
}
