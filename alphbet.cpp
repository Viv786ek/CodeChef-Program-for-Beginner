#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
	int n;
	cin>>n;
	
	while(n--)
	{
	    string w;cin>>w;
	    int k=(int) w.size();
	    sort(s.begin(),s.end());
	    sort(w.begin(),w.end());
	    for(int i=0;i<k;i++)
	    {
	        if(s[i]==w[i])
	        {
	            cout<<"Yes"<<endl;
	        }
	        else
	        {
	            cout<<"No"<<endl;
	        }
	    }
	}
	return 0;
}

