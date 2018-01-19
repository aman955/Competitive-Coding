#include<iostream>
int main()
{
	int n,m,row,i=1,d=1,zeroes,column;
	std::cin>>m;
	n=m*(m+1)/2;
	int a[n];
	for(row=0;row<m;row++)
	{
		for(column=(row*(row+1)/2)+1;column<=(row+1)*(row+2)/2;column++)
		{
			a[i]=8*i*i-2*i;
			d=1;
			while(a[i]/10!=0)
			{
				d++;
				a[i]=a[i]/10;
			}
			zeroes=5-d;
			a[i]=8*i*i-2*i;
			for(int k=0;k<zeroes;k++)
			std::cout<<"0";
			std::cout<<a[i]<<" ";
			i++;
		}
		std::cout<<"\n";
	}
}
