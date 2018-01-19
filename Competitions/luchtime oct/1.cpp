#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> vec;
		long long a,b,c,d,i,e;
		cin>>a>>b;
		while(a!=0||b!=0)
		{
			c=a%10;
			d=b%10;
			e=(a+b)%10;
			vec.push_back(e);
			a=a/10;
			b=b/10;
		}
		int count=0;
		for(i=vec.size()-1;i>=0;i--)
		{
			if(vec[i]==0)
			count++;
			else
			break;
		}
		if(count==vec.size())
		{
			cout<<"0"<<endl;
			continue;
		}
		for(;i>=0;i--)
		{
			cout<<vec[i];
		}
		cout<<endl;
	}
}
