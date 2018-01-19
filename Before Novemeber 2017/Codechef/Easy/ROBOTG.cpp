#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string str;
		cin>>str;
		int width=0,maxwidth=0,minwidth=0,height=0,diff1,diff2,maxheight=0,minheight=0;
		for(int i=0;i<str.length();i++)
		{
		if(str[i]=='U')
		height++;
		else if(str[i]=='D')
		height--;
		else if(str[i]=='L')
		width--;
		else
		width++;
	
		maxheight=max(maxheight,height);
		minheight=min(minheight,height);

		
		maxwidth=max(maxwidth,width);
		minwidth=min(minwidth,width);
	
		}
				diff1=maxheight-minheight+1;
			diff2=maxwidth-minwidth+1;
			if(diff2<=m&&diff1<=n)
			cout<<"safe"<<endl;
			else
			cout<<"unsafe"<<endl;
	}
}
