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
        int k;
        cin>>k;
        string s;
        cin>>s;
        int len=s.length();
        int i=k;
        if(k==1)
        {
        cout<<s<<endl;
        continue;
        }
        //cout<<s<<endl;
        while(i>=1)
        {
            string tt=s.substr(0,i);
            string left=s.substr(i);
            //cout<<tt<<" "<<left<<endl;
            reverse(tt.begin(),tt.end());
            s=tt+left;
            i--;
        }
        cout<<s<<endl;
    }
	return 0;
}