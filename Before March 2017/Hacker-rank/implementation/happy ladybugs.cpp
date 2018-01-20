#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int b[35]={0},i,n;
	cin>>n;
	string str;
	cin>>str;
	
	for(i=0;i<n;i++)
	{
		b[str[i]-65]++;
	}
	for(i=0;i<26;i++)
	{
		if(b[i]==1)
		{
		cout<<"NO"<<endl;
		goto aman;
	}
    }
    if(b[30]==0)
    {
    		
    	if(str[0]==str[1]&&str[n-1]==str[n-2])
    	{
		for(i=1;i<n-1;i++)
    	{
    		
    		if(str[i]==str[i-1]||str[i]==str[i+1])
    		continue;
    		else
    			{
				cout<<"NO"<<endl;
             	goto aman;
    	       }
		}
	    }
	    	else
    		{
				cout<<"NO"<<endl;
             	goto aman;
             }
    

}
   cout<<"YES"<<endl;
      aman:;
    }
}
