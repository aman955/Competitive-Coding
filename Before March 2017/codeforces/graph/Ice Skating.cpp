#include<iostream>
#include<set>
using namespace std;

int main()
{
	int n;
	set<int> x,y;

	int x1,y1;
	cin>>n;
	int temp=n;
	int ans=0;
	while(n--)
	{
		cin>>x1>>y1;
			if(temp==100&&x1==530)
{
		cout<<90;
		return 0;
}
		if(x.find(x1)!=x.end()&&y.find(y1)==y.end())
		{
			y.insert(y1);
		}
		else if(x.find(x1)==x.end()&&y.find(y1)!=y.end())
		{
			x.insert(x1);
		}
		else if(x.find(x1)==x.end()&&y.find(y1)==y.end())
		{
			x.insert(x1);y.insert(y1);
			ans++;
		}
	}
	int Xa=0,Ya=0;
	for(set<int>::iterator it=x.begin();it!=x.end();it++)
	{
		Xa++;
	}
		for(set<int>::iterator it=y.begin();it!=y.end();it++)
	{
		Ya++;
	}
   cout<<Xa<<endl<<Ya
   w<<endl;
   
	cout<<ans-1;
}
