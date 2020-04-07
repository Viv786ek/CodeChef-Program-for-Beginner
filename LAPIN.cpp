#include<bits/stdc++.h>
#include<string>
using namespace std;
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define ld long double


int main()
{
int t;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	int n=s.size();
	int k;
	if(n%2==0)
		k=n/2;
	else
		k=n/2+1;
	
	string s1=s.substr(0,n/2),s2=s.substr(k,n);
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	if(s1==s2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
}
return 0;
}
