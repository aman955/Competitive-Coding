#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector < pair<int ,int> > vec;
	int i,x,y,r,q;
	cin>>r>>q;
	for(i=0;i<k;i++)
	{
		cin>>x>>y;
		vec.push_back(make_pair(x,y));
	}
	
	int minleft=n,minright=n,mindown=n,minup=n,digupleft=n,digupright=n,digdownleft=n,digdownright=n;
	
	for(i=0;i<k;i++)
	{
		if(vec[i].first==r||vec[i].second==q)
		{
			if(vec[i].second==q)
			{
				if((vec[i].first-r)>0&& (vec[i].first-r)<minright)
				{
					minright=vec[i].first-r-1;
				}
				if((r-vec[i].first)>0&& (r-vec[i].first)<minleft)
				{
					minleft = r-vec[i].first-1;
				}
			}
			else
			{
				if((vec[i].second-q)>0 && (vec[i].second-q)<minup)
				{
					minup=vec[i].second-q-1;
				}
				if((q-vec[i].second)>0 && (q-vec[i].second)<mindown)
				{
					mindown = q-vec[i].second-1;
				}
			}
		}
		else if(abs(q-vec[i].second)==abs(r-vec[i].first))
		{
			if(r+q==vec[i].first+vec[i].second)
			{
				if((vec[i].second-q)>0&&(vec[i].second-q)<digupleft)
				{
					digupleft = vec[i].second-q-1;
				}
				if((q-vec[i].second)>0&&(q-vec[i].second)<digdownright)
				{
					digdownright = q-vec[i].second-1;
				}
			}
			else
			{
				if((vec[i].second-q)>0&&(vec[i].second-q)<digupright)
				{
					digupright = vec[i].second-q-1;
				}
				if((q-vec[i].second)>0&&(q-vec[i].second)<digdownleft)
				{
					digdownleft = q-vec[i].second-1;
				}
			}
		}
	}
	if(minleft==n)
	{
		minleft=r-1;
	}
	if(minright==n)
	{
		minright=n-r;
	}
	if(minup==n)
	{
		minup=n-q;
	}
	if(mindown==n)
	{
		mindown=q-1;
	}
	if(digupleft==n)
	{
		digupleft=min(r-1,n-q);
	}
	if(digupright==n)
	{
		digupright=min(n-r,n-q);
	}
	if(digdownleft==n)
	{
		digdownleft=min(r,q)-1;
	}
	if(digdownright==n)
	{
		digdownright=min(n-r,q-1);
	}
	
	int ans=minleft+minright+mindown+minup+digupleft+digupright+digdownleft+digdownright;
	cout<<ans<<endl;
/*	cout<<"minleft = "<<minleft<<endl<<"minright = "<<minright<<endl<<"mindown ="<<mindown<<endl<<"minup ="<<minup<<endl;
	cout<<"digupleft ="<<digupleft<<endl<<"digupright ="<<digupright<<endl<<"digdownleft ="<<digdownleft<<endl<<"digdownright ="<<digdownright<<endl;
*/	
	
}
