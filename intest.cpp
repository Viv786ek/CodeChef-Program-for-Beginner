#include<iostream>
using namespace std;

int main()
{
	int n,k ;
	cin>>n>>k;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		long long int t;
		cin>>t;
		if(t%k==0)
			count++;
		else
			count=count;
	}
	
	 cout<<count<<endl;

}
