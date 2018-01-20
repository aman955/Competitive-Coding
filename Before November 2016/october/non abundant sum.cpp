#include<iostream>
using namespace std;

int main()
{
	long n=28123,i,sum,j;
	{
		for(i=28123;i>=0;i--)
		{
			sum=0;
			for(j=(i+1)/2;j>0;j--)
			{
				if(i%j==0)
				{
					sum=sum+j;
				}
			}
			if(sum>i)
			cout<<i<<endl;
		}
	}
}
