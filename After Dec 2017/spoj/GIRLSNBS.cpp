#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n=1;
	while(n)
	{
		int g,b;
		scanf("%d%d",&g,&b);
		if(g==-1&&b==-1)
		return 0;
		if(g>b)
		swap(g,b);
		if(b==0||g==0)
		{
			if(b==0&&g==0)
			printf("0\n");
			else
			printf("%d\n",b);
		}
		else
		{
			int t=ceil(float(b)/float(g+1));
			printf("%d\n",t);
		}

	}
	
}
