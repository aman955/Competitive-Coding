#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int a[26]={};
	string str;
	cin>>str;
	int n=str.length(),counti=0;
	for(i=0;i<n-3;i++)
	{
		a[str[i]-'a']=1;
		a[str[i+1]-'a']=1;
		a[str[i+2]-'a']=1;
		a[str[i+3]-'a']=1;
	
		if((a[2]==1)&&(a[4]==1)&&(a[5]==1)&&(a[7]==1))
		{
			counti++;
		
			
		}
		a[2]=0;
		a[4]=0;
		a[5]=0;
		a[7]=0;
		
	}
	if(counti)
	cout<<"lovely "<<counti<<endl;
	else 
	cout<<"normal"<<endl;
	}
}
