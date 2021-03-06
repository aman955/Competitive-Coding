#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

typedef struct number
{
	long long num=0;
	long long den=1;
};


long long gcdExtended(long long a, long long b, long long *x, long long *y);
 

long long modInverse(long long a)
{
    long long x, y;
    long long g = gcdExtended(a, mod, &x, &y);
   
        long long res = (x%mod + mod) % mod;
        return res;
    
}
 

long long gcdExtended(long long a, long long b, long long *x, long long *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    long long x1, y1; // To store results of recursive call
    long long gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}



long long  gcd(long long int a,long long  int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
 
long long int lcm(long long int a,long long int b)
{
    return (a*b)/gcd(a, b);
}

struct number add(number num1,number num2)
{
	
	long long g=lcm(num1.den,num2.den);
	long long a=(g)/(num1.den);
	a=a*num1.num;
	long long b=(g)/(num2.den);
	b=b*num2.num;
	number temp;
	temp.num=(a+b);
	temp.den=g;
	return temp;
}




void matmult(number a[][2],number b[][2],number c[][2])
{
    int i,j,k;
    number temp[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            for(k=0;k<2;k++)
            {  
            	temp[i][j].num=(a[i][k].num*b[k][j].num);
            	temp[i][j].den=(a[i][k].den*b[k][j].den);
            	
            	long long g,h;
        g=gcd(temp[i][j].num,temp[i][j].den);
		temp[i][j].num=(temp[i][j].num/g);
		temp[i][j].den=(temp[i][j].den/g);
		long long inver=modInverse(temp[i][j].den);
		inver=(inver*(temp[i][j].num)%mod)%mod;
		temp[i][j].num=inver;
		temp[i][j].den=1;
            	
                c[i][j]=add(c[i][j],(temp[i][j]));
                
            }
        }
    }
 
}

void multiply(number F[2][2],number M[2][2])
{
    number x,y,z,w,temp1,temp2;
    
    temp1.num=F[0][0].num*M[0][0].num;
    temp1.den=F[0][0].den*M[0][0].den;
    long long g,h;
        g=gcd(temp1.num,temp1.den);
		temp1.num=(temp1.num/g);
		temp1.den=(temp1.den/g);
		long long inver=modInverse(temp1.den);
		inver=(inver*(temp1.num)%mod)%mod;
		temp1.num=inver;
		temp1.den=1;
    
    
    temp2.num=F[0][1].num*M[1][0].num;
    temp2.den=F[0][1].den*M[1][0].den;
    
     g=gcd(temp2.num,temp2.den);
		temp2.num=(temp2.num/g);
		temp2.den=(temp2.den/g);
		inver=modInverse(temp2.den);
		inver=(inver*(temp2.num)%mod)%mod;
		temp2.num=inver;
		temp2.den=1;
		
    x=add(temp1,temp2);
    
    
    
    temp1.num=F[0][0].num*M[0][1].num;
    temp1.den=F[0][0].den*M[0][1].den;
    
    g=gcd(temp1.num,temp1.den);
		temp1.num=(temp1.num/g);
		temp1.den=(temp1.den/g);
		inver=modInverse(temp1.den);
		inver=(inver*(temp1.num)%mod)%mod;
		temp1.num=inver;
		temp1.den=1;
    
    temp2.num=F[0][1].num*M[1][1].num;
    temp2.den=F[0][1].den*M[1][1].den;
    
    g=gcd(temp2.num,temp2.den);
		temp2.num=(temp2.num/g);
		temp2.den=(temp2.den/g);
		inver=modInverse(temp2.den);
		inver=(inver*(temp2.num)%mod)%mod;
		temp2.num=inver;
		temp2.den=1;
		
    y=add(temp1,temp2);
    
    g=gcd(temp1.num,temp1.den);
		temp1.num=(temp1.num/g);
		temp1.den=(temp1.den/g);
		inver=modInverse(temp1.den);
		inver=(inver*(temp1.num)%mod)%mod;
		temp1.num=inver;
		temp1.den=1;
    
    temp1.num=F[1][0].num*M[0][0].num;
    temp1.den=F[1][0].den*M[0][0].den;
    temp2.num=F[1][1].num*M[1][0].num;
    temp2.den=F[1][1].den*M[1][0].den;
    
    g=gcd(temp2.num,temp2.den);
		temp2.num=(temp2.num/g);
		temp2.den=(temp2.den/g);
		inver=modInverse(temp2.den);
		inver=(inver*(temp2.num)%mod)%mod;
		temp2.num=inver;
		temp2.den=1;
		
    z=add(temp1,temp2);
    
    temp1.num=F[1][0].num*M[0][1].num;
    temp1.den=F[1][0].den*M[0][1].den;
    
    g=gcd(temp1.num,temp1.den);
		temp1.num=(temp1.num/g);
		temp1.den=(temp1.den/g);
		inver=modInverse(temp1.den);
		inver=(inver*(temp1.num)%mod)%mod;
		temp1.num=inver;
		temp1.den=1;
    
    temp2.num=F[1][1].num*M[1][1].num;
    temp2.den=F[1][1].den*M[1][1].den;
    
    g=gcd(temp2.num,temp2.den);
		temp2.num=(temp2.num/g);
		temp2.den=(temp2.den/g);
		inver=modInverse(temp2.den);
		inver=(inver*(temp2.num)%mod)%mod;
		temp2.num=inver;
		temp2.den=1;
    
    w=add(temp1,temp2);
 
    
    F[0][0]=x;
    F[0][1]=y;
    F[1][0]=z;
    F[1][1]=w;
}

void powerii(number F[2][2],long long n,number p)
{
    if(n==0||n==1){
        return ;
    }
    struct number a1,a2,a3,a4;
    a1.num=0;
    a2.num=-1;
    a3.num=1;
    a4.num=2*p.num;
    a4.den=p.den;
    number M[2][2]={{a1,a2},{a3,a4}};
    powerii(F,n/2,p);
    multiply(F,F);
    if(n%2)
	{
        multiply(F,M);
    }
}




number findNthTerm(long long int n,number p)
{


    if(n>=2)
    {
    struct number a1,a2,a3,a4;
    a1.num=0;
    a2.num=-1;
    a3.num=1;
    a4.num=2*p.num;
    a4.den=p.den;
    number Z[2][2] = {{a1,a2},{a3,a4}};
	powerii(Z,n,p);
        
      
        number temp;
    temp.num=(Z[1][0].num)*p.num;
    temp.den=(Z[1][0].den)*p.den;
    temp=add(Z[0][0],temp);
        return temp;
    }
    

}


int main()
{
	
	int t;
	cin>>t;

	while(t--)
	{
	
		long long g,l,d,time;
		cin>>l>>d>>time;
		long long length=l;
		long long f=d;
		number p;
		g=gcd(l,d);
		l=(l/g);
		d=(d/g);
		p.num=d;
		p.den=l;
		if(time==1)
		{
			long long inver;
		inver=(f)%mod;
		cout<<inver<<endl;
		continue;
		}
		number x=findNthTerm(time,p);
	
		x.num=((length%mod*x.num%mod)%mod+mod)%mod;
		
		g=gcd(x.num,x.den);
		x.num=(x.num/g);
		x.den=(x.den/g);
		
		long long inver=modInverse(x.den);
		inver=(inver*x.num)%mod;
		cout<<inver<<endl;
		
	
	}
		
	
	
}

