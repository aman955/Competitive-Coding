#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
	int n,i,j,x;
	cin>>n;
	int typeballs[n]={0},containerballs[n]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>x;
			typeballs[i]+=x;
			containerballs[j]+=x;
		}
	}
	sort(typeballs,typeballs+n);
	sort(containerballs,containerballs+n);
	for(i=0;i<n;i++)
	{
		if(typeballs[i]!=containerballs[i])
		{
			cout<<"Impossible"<<endl;
			goto aman;
		}
	}
	cout<<"Possible"<<endl;
	aman: ;
     }
}
