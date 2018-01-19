#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j;
		cin>>n>>m;
		int god[n],mechgod[m];
		for(i=0;i<n;i++)cin>>god[i];
		for(i=0;i<m;i++)cin>>mechgod[i];
		i=0;j=0;
		sort(god,god+n);
		sort(mechgod,mechgod+m);
		while(i<n&&j<m)
		{
			if(mechgod[j]>god[i])
			{
				i++;
			}
			else
			{
				j++;
			}
		}
		if(j==m)
		{
			cout<<"Godzilla"<<endl;
		}
		else
		{
			cout<<"MechaGodzilla"<<endl;
		}
	}
}


