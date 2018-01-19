#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=1,b=1,c=1;
	while(1)
	{
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)
		break;
		if(c-b==b-a)
		{
			cout<<"AP "<<c+b-a<<endl;
		}
		else
		{
				cout<<"GP "<<(b/a)*c<<endl;
		}
	}
}
