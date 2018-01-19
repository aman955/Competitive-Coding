#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
 
	while(t--)
	{
	
	bool top1=false,top2=false;
		int n,i=0,word=0;
		cin>>n;
 	bool val=false,jar=false;
		string str1,str2;
		cin>>str1>>str2;
 int bord=0;
 
 
		while(str1[i])
		{
			for(int k=0;k<10;k++)
			   {
			   	int loc=10;
				  }
			
			if(str1[i]=='*' && str2[i]=='*')
			{
				if(jar || val)
				word++;
               
			    top1=true;
				top2=true;  
				val=true;
				jar=true;
				
			}
			else if(str1[i]=='*')
			{
				if(jar)
				{
					word++;
					val=false;
				}
 
				jar=true;
				top1=true;
			}
			
			else if(str2[i]=='*')
			{
				if(val)
				{
					word++;
					jar=false;
					
				}
				
				val=true;
				top2=true;
			}
 
 
			i++;
		}
 
		if(top1&&top2)
		{
			cout<<word+1<<endl;
		}
		else
		{
			cout<<word<<endl;
		}
	}
 
	return 0;
}

1
5 4
1 2
2 3
2 4
4 5
0 3 4 4 4
