#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	vector<long> l(n);
	long maxside,midside,minside;
	for(i=0;i<n;i++)
	{
		cin>>l[i];
	}
	sort(l.begin(),l.end());
	
	i=n-1;
	
	while(i!=1)
	{
		maxside=l[i];
		midside=l[i-1];
		minside=l[i-2];
		if(maxside<midside+minside && maxside+minside>midside && maxside+midside>minside )
		{
			cout<<minside<<" "<<midside<<" "<<maxside;
			return 0;
		}
		i--;
	}
	cout<<"-1";
	
}
