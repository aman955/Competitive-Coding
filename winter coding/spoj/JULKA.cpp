#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t=10,i,j;
	while(t--)
	{
	
		int arr[310]={},brr[310]={},crr[310]={},drr[310]={},err[310]={},copyarr[310]={};
		string str1,str2;
		cin>>str1>>str2;
		if(str1==str2)
		{
			cout<<str1<<endl<<0<<endl;
			continue;
		}
		j=0;
		for(i=str1.length()-1;i>=0;i--)
		{
			arr[j]=str1[i]-'0';
			copyarr[j]=str1[i]-'0';
			j++;
		}
		j=0;
		for(i=str2.length()-1;i>=0;i--)
		{
			brr[j]=str2[i]-'0';
			j++;
		}
	   for(i=0;i<str1.length();i++)
	   {
	   	if(arr[i]<brr[i])
	   	{
		   arr[i+1]--;
		   arr[i]+=10;
	    }
	   	crr[i]=arr[i]-brr[i];
		}
		
		for(i=308;i>=0;i--)
		{	
				drr[i]=crr[i]/2;
				if(crr[i]%2==1)
				{
				crr[i-1]=10+crr[i-1];
				}	
	    }

		for(i=0;i<308;i++)
	   {
	   	if(copyarr[i]<drr[i])
	   	{
		   copyarr[i+1]--;
		   copyarr[i]+=10;
	    }
	   	err[i]=copyarr[i]-drr[i];
		}
		
		    i=309;
	    while(err[i]==0)
	    {
	    	i--;
		}
		for(;i>=0;i--)
		cout<<err[i];	
		cout<<endl;	
		
			    i=309;
	    while(drr[i]==0)
	    {
	    	i--;
		}
		
	    
		for(;i>=0;i--)
		cout<<drr[i];	
		cout<<endl;	
			
	}
	
}
