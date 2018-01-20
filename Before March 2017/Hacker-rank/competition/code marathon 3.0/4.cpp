
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,building;
	cin>>n>>building;
	int arr[n];
	for(i=0;i<n;i++) cin>>arr[i];
	int s=0,fin=15212121,point;
	vector< vector<int> > vec(100);
	
	for(i=50;i>0;i--)
	{
		for(int j=0;j<n;j++) 
		{
		if(arr[j]<=i) 
		vec[i].push_back(arr[j]);
	    }
	}
	
	for(i=1;i<51;i++) 
	sort(vec[i].rbegin(),vec[i].rend());
	
	
	
	for(i=50;i>0;i--)
	{
		s=0;
		
		if(vec[i].size()>=building)
		{
			for(j=0;j<building;j++) 
			{
			s = s+vec[i][j];
			}
			point = i*building - s;
		}
		
		if(fin>point) fin = point;
	}
	cout<<fin;
}
