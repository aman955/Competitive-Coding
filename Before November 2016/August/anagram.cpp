#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t,i,j,n,c,sum=0,d,e;
    cin>>t;
    string str,a,b;
    while(t--)
    {
    	sum=0;
    int	alp[26]={0};
    int	alp1[26]={0};
    	cin>>str;
    	n=str.length();
    	if(n%2==1)
    	cout<<"-1"<<endl;
    	else
    	{
    		a=str.substr(0,n/2);
    		b=str.substr(n/2,n-1);
    	for(i=0;i<n/2;i++)
    	{
    		c=a[i]-97;
    		d=b[i]-97;
    		alp[c]++;
    		alp1[d]++;
		}
		for(i=0;i<26;i++)
		{
			if(alp[i]>alp1[i]&&alp[i]>0)
			{
				e=abs(alp[i]-alp1[i]);
				sum=sum+e;
			}
		}
		}
		cout<<sum<<endl;
	}
}
