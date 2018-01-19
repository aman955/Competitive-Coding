#include<iostream>
#include<string>
using namespace std;
string hundred(long long x);
int digit(long long x);
string number2(long long x);
string number(long long x)
{
	x=x%10;
     if(x==1)
	 return "One ";
	  else if(x==2)
	 return "Two ";
	  else if(x==3)
	 return "Three ";
	  else if(x==4)
	 return "Four ";
	  else if(x==5)
	 return "Five ";
	  else if(x==6)
	 return "Six ";
	  else if(x==7)
	 return "Seven ";
	  else if(x==8)
	 return "Eight ";
	  else if(x==9)
	 return "Nine ";
	 else 
	 return "";
	 
}

string number2(long long x)
{
	string s;
	long long l=x/10;
	if(l%10!=1 && l%10!=0)
	{
		if(l%10==2)
		s= "Twenty "+ number(x%10);
		else if(l%10==3)
		s= "Thirty "+ number(x%10);
		else if(l%10==4)
		s= "Forty "+ number(x%10);
		else if(l%10==5)
		s= "Fifty "+ number(x%10);
		else if(l%10==6)
		s= "Sixty "+ number(x%10);
		else if(l%10==7)
		s= "Seventy "+ number(x%10);
		else if(l%10==8)
		s= "Eighty "+ number(x%10);
		else if(l%10==9)
		s= "Ninety "+ number(x%10);
	}
	else if (l%10==1)
	{
		if(x%10==0)
		s="Ten ";
		if(x%10==1)
		s="Eleven ";
		if(x%10==2)
		s="Twelve ";
		if(x%10==3)
		s="Thirteen ";
		if(x%10==4)
		s="Fourteen ";
		if(x%10==5)
		s="Fifteen ";
		if(x%10==6)
		s="Sixteen ";
		if(x%10==7)
		s="Seventeen ";
		if(x%10==8)
		s="Eighteen ";
		if(x%10==9)
		s="Nineteen ";
	}
	else if(l%10==0)
	{
	 s=number(x%100);	
	}
	
	return s;
	
}

int main()
{
	int t;
	cin>>t;
	long long n,k;
	while(t--)
	{
		cin>>n;
		int b;
		b=digit(n);
		if(b==12)
		{
			k=n/1000000000;
			cout<<number(k/100)<<hundred(k/100)<<number2(k)<<"Billion ";
		k=n/1000000;
		if(k%1000!=0)
		cout<<number(k/100)<<hundred(k/100)<<number2(k)<<"Million ";
		k=n/1000;
		if(k%1000!=0)
	   cout<<number(k/100)<<hundred(k/100)<<number2(k)<<"Thousand ";
	   k=n;
	   if(k%1000!=0)
	   	  cout<<number(k/100)<<hundred(k/100)<<number2(k);
			
		}
		else if(b==11||b==10)
		{
			k=n/1000000000;
			cout<<number2(k)<<"Billion ";
		k=n/1000000;
		if(k%1000!=0)
		cout<<number(k/100)<<hundred(k/100)<<number2(k)<<"Million ";
		k=n/1000;
		if(k%1000!=0)
	   cout<<number(k/100)<<hundred(k/100)<<number2(k)<<"Thousand ";
	   k=n;
	   if(k%1000!=0)
	   	  cout<<number(k/100)<<hundred(k/100)<<number2(k);
			
		}
		else if(b==9)
		{
		k=n/1000000;
		if(k%1000!=0)
		cout<<number(k/100)<<hundred(k/100)<<number2(k)<<"Million ";
		k=n/1000;
		if(k%1000!=0)
	   cout<<number(k/100)<<hundred(k/100)<<number2(k)<<"Thousand ";
	   k=n;
	   if(k%1000!=0)
	   	  cout<<number(k/100)<<hundred(k/100)<<number2(k);
			
		}
			else if(b==8||b==7)
		{
		k=n/1000000;
		if(k%1000!=0)
		cout<<number2(k)<<"Million ";
		k=n/1000;
		if(k%1000!=0)
	   cout<<number(k/100)<<hundred(k/100)<<number2(k)<<"Thousand ";
	   k=n;
	   if(k%1000!=0)
	   	  cout<<number(k/100)<<hundred(k/100)<<number2(k);
			
		}
			else if(b==6)
		{
		k=n/1000;
		if(k%1000!=0)
	   cout<<number(k/100)<<hundred(k/100)<<number2(k)<<"Thousand ";
	   k=n;
	   if(k%1000!=0)
	   	  cout<<number(k/100)<<hundred(k/100)<<number2(k);
			
		}
			else if(b==5||b==4)
		{
		k=n/1000;
		if(k%1000!=0)
	   cout<<number2(k)<<"Thousand ";
	   k=n;
	   if(k%1000!=0)
	   	  cout<<number(k/100)<<hundred(k/100)<<number2(k);
			
		}
				else if(b==3)
		{
	   k=n;
	   if(k%1000!=0)
	   	  cout<<number(k/100)<<hundred(k/100)<<number2(k);
			
		}
		else if(b==2||b==1)
		{
		k=n;
			cout<<number2(k);
		}
		else if(b==0)
		cout<<"Zero";
		
		cout<<endl;
	}
	
}

string hundred(long long x)
{
	if(x%10!=0)
	return "Hundred ";
	else 
	return "";
}

int digit(long long x)
{
	int temp;
	while(x!=0)
	{
		x=x/10;
		temp++;
	}
	return temp;
}
