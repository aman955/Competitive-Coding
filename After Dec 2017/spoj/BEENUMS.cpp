#include<iostream>
int main()
{
    long long int n;
	while(1)
	{
		scanf("%lld",&n);
		if(n==-1)
		return 0;
		if(n==0)
		{
			printf("N\n");
			continue;
		}
		long long temp=1,j=1;;
		while(n>temp)
		{
			temp=temp+6*j;
			j++;
		}
		if(temp==n)
		printf("Y\n");
		else printf("N\n");
	}
}
