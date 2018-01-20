unsigned long long power_modulus(int a,int b,int mod)//(a^b)%mod
{
	long int res=1;
	
	for(int i=0;i<b/2;i++)
	{
		res*=((a*a)%n);
		res%n=n;
	}
	
	if(b%n==1)
	res*=a;
	
	res%=n;
	return res;
}
