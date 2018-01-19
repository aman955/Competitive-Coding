#include<iostream>
using namespace std;

int row[315000]={},col[315000]={};
int main()
{
	int n,q;
	cin>>n>>q;
	while(q--)
	{
		string str;
		int rowcol,num;
		cin>>str>>rowcol>>num;
		if(str=="RowAdd")
		{
			row[rowcol]+=num;
		}
		else
		{
			col[rowcol]+=num;
		}
		
	}
	int maxrow=-1,maxcol=-1;
	for(int i=1;i<=n;i++)
	{
		maxrow=max(maxrow,row[i]);
	}
	for(int i=1;i<=n;i++)
	{
		maxcol=max(maxcol,col[i]);
	}
	long long ans=maxrow+maxcol;
	cout<<ans<<endl;
}
