#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long a,b;
		cin>>a>>b;
		if(b==0){cout<<"1"<<endl;continue;}
		a=a%10;
		if(a==0){cout<<"0"<<endl;continue;}
	    else if(a==1)cout<<"1"<<endl;
		else if(a==2||a==3||a==7||a==8){b=b%4;if(b==0)b+=4;cout<<((long long) pow(a,b))%10<<endl;}
		else if(a==4||a==9){b=b%2;if(b==0)b+=2;cout<<((long long) pow(a,b))%10<<endl;}
		else if(a==5){cout<<"5"<<endl;}
		else if(a==6){cout<<"6"<<endl;}
	}
}
