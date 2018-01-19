#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int x,i;
	int p;
	cin>>p;
	while(p--)
	{
		int m,n;
		cin>>m>>n;
		bool arr[m+1]={true};
		while(n--)
		{
			cin>>x;
			arr[x]=true;
		}
		int t=1;
		vector<int> chef,part;
		for(i=1;i<=m;i++)
		{
			if(arr[i]==false && t==1)
			{
				chef.push_back(i);
				t=0;
			}
			else if(arr[i]==false && t==0)
			{
				part.push_back(i);
				t=1;
			}
		}
		for(i=0;i<chef.size();i++)
		cout<<chef[i]<<" ";
		cout<<endl;
		for(i=0;i<part.size();i++)
		cout<<part[i]<<" ";
		cout<<endl;
	}
}
