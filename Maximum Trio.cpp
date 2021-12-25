#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    long long int k,m;
	    k=(a[n-1]-a[0]);
	    m=k*a[n-2];
	    cout<<m<<endl;
	}
	return 0;
}
