#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	long t;
	cin>>t;
	long c,d,l,a,b,e;
	
	while(t--)
	{
		scanf("%ld%ld%ld",&c,&d,&l);
		a=d*4;
		b=a+c*4;
		e=c*4-d*4;
		if(l>=b/4)
		{
			if(((b/4)%4)==0)
            {
			a=b/4;
			e=b/4;
		    }
			else if(((b/4)%4)==1)
			{
			a=b/4-1;
			e=b/4-1;
		    }
			else if(((b/4)%4)==2)
			{
			a=b/4-2;
			e=b/4-2;
		     }
			else
			{
			a=b/4-3;
			e=b/4-3;
		    }
		}
		
		if(l>=b/2)
		{
			if((b/2)%4==2)
			{
		    a=b/2-2;
		    e=b/2-2;
		    }
		    else
			{
			a=b/2;
			e=b/2;
		    }
		}
		if(l>=3*b/4)
			{
			if(((3*b/4)%4)==0)
            {
			a=3*b/4;
			e=3*b/4;
		    }
			else if(((3*b/4)%4)==1)
			{
			a=3*b/4-1;
			e=3*b/4-1;
		    }
			else if(((3*b/4)%4)==2)
			{
			a=3*b/4-2;
			e=3*b/4-2;
		     }
			else
			{
			a=3*b/4-3;
			e=3*b/4-3;
		    }
		}
		
		if(2*d>=c)
		{
			for(long i=a;i<=b;i+=4)
			{
				
				if(i==l)
				{
				printf("yes\n");
				goto pos;
			    }
			}
		}
		else
		{
			for(long i=e;i<=b;i+=4)
			{
				
				if(i==l)
				{
				printf("yes\n");
				goto pos;
			    }
			}
		}
		printf("no\n");
		pos: ;
	}
}
