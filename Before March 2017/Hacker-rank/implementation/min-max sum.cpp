#include<iostream>
using namespace std;

int main()
{
	int i;
    long long a[5],min,max,minsum=0,maxsum=0;
    for(i=0;i<5;i++)
    {
    	cin>>a[i];
	}
	min=0;
	max=0;
	
	for(i=1;i<5;i++)
	{
		if(a[i]<a[min])
		min=i;
		if(a[i]>a[max])
		max=i;
	}

	
	 for(i=0;i<5;i++)
    {
    	if(i==min)
    	continue;
    	minsum=minsum+a[i];
	}
	 for(i=0;i<5;i++)
    {
    	if(i==max)
    	continue;
    	maxsum=maxsum+a[i];
	}
	
	cout<<maxsum<<" "<<minsum;
}
	
