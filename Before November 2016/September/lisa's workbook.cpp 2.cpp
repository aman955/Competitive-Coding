#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int ans=0;
	int page=1;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		int ques;
		int r=0;
		
		for(ques=1;ques<=t;ques++)
		{
			r=0;
			if(ques==page)
			{
				ans++;
			}
			
			if(ques%k==0)
			{
				r=1;
				page++;
			}
		
		}
			if(r==0)
			page++;
         
	}
	cout<<ans;
}
