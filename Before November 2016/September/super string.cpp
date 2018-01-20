#include<iostream>
using namespace std;

int main()
{
	int i,t,n,j,k;
	cin>>t;
	string str,sub;
	while(t--)
    {
    	cin>>n>>k;
    	cin>>str;
    if(k>=2)
    {
    	char t=str[0];
    	for(i=0;i<n;i++)
    	{
    		if(str[i]<t)
    		t=str[i];
		}
		cout<<t<<endl;
	}
	else
	{
		char t=str[0];
    	for(i=0;i<n;i++)
    	{
    		if(str[i]<t)
    		{
			t=str[i];
			j=i;
		}
	}
	if(j=str[0])
	swap(i,j);
		sub=str.substr(j);
		cout<<sub<<endl;
    	
}
	
}
}
