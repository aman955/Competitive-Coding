#include<stdio.h>
int main()
{
	int element,n,m, Tn,j, d, zeroes,row;
	scanf("%d", &m);
	
	for(row=0;row<m;row++)
	{   for(n=1;n<row+1;n++)
		{element= row*(row+1)/2 +n;
		Tn = 8*element*element - 2*element;
		{
		element= row*(row+1)/2 +n;
		Tn = 8*element*element - 2*element;
		d=1;
		while(Tn/10!=0)
		{
			Tn=Tn/10;
			d=d+1;
		 } 
		zeroes= 5-d;
		
		
		
		
		
	 for(j=0;j<zeroes;j++)
	 {
	 printf("%d",0);	
	 }
	 printf("%d ", Tn);};
}
printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
}
