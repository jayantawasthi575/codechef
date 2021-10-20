#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{   
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    int flag=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if((s[i]=='L'&&s[i+1]=='L')||(s[i]=='R'&&s[i+1]=='R'))
	       {    
	           //cout<<s[i]<<" "<<s[i+1]<<endl;
	           flag=1;
	           break;
	       }
	    }
	    if(flag==1)
	    cout<<"YES";
	    else
     	cout<<"NO";
     	cout<<endl;
	}
	return 0;
}