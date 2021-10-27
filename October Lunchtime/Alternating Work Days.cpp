#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
	while(t--)
	{
	    long long  a,b,p,q;
	    cin>>a>>b>>p>>q;
	    long long  v=0,x=0,y=0,z=0;
	    v=p%a;
	    x=q%b;
	    if(v==0 && x==0)
	    {
	     y=p/a;
	     z=q/b;
	     if(abs(y-z)==1 || (y-z)==0)
	     {
	         cout<<"YES"<<endl;
	     }
	     else
	     {
	         cout<<"NO"<<endl;
	     }
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
