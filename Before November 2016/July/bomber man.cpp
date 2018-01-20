#include<iostream>
using namespace std;

int main()
{
	int R,C,i,j,k;
	long long N;
	cin>>R>>C>>N;
	long long int *cache=new long long int[5000][500];
	char *map=new long long char[R+2][C+2];
	char *copymap=new long long char[R+2][C+2]
	long long int *cache=new long long int[5000002];
	for(i=1;i<=R;i++)
	{
		for(j=1;j<=C;j++)
		cin>>map[i][j];
	}
	
	for(j=0;j<=C+1;j++)
	{
	map[0][j]='O';
	map[R+1][j]='O';
    }
	
	for(i=0;i<=R+1;i++)
	{
	 map[i][0]='O';
	 map[i][C+1]='O';
    }
	
	if(N==1)
	{
		for(i=1;i<=R;i++)
	{
		for(j=1;j<=C;j++)
		cout<<map[i][j];
		cout<<endl;
	}
	return 0;
	}
	if(N/2==0)
	{
		for(i=1;i<=R;i++)
	{
		for(j=1;j<=C;j++)
		cout<<'O';
		cout<<endl;
	}
	return 0;
	}
	
	for(k=3;k<=5;k+=2)
	{
		for(i=1;i<=R;i++)
		{
			for(j=1;j<=C;j++)
			copymap[i][j]='O';
		}
			for(i=1;i<=R;i++)
			{
				for(j=1;j<=C;j++)
				{
					if(map[i][j]=='O')
					{
						copymap[i][j]='.';
						copymap[i+1][j]='.';
						copymap[i-1][j]='.';
						copymap[i][j+1]='.';
						copymap[i][j-1]='.';
					}
				}
			}
        for(i=1;i<=R;i++)
		{
			for(j=1;j<=C;j++)
                map[i][j]=copymap[i][j];
        }
        
			if((N+1)%4==0)
			{
				for(i=1;i<=R;i++)
			{
				for(j=1;j<=C;j++)
				{
				cout<<copymap[i][j];
				}
				cout<<endl;
			}
			return 0;
			}
			
	}
	
			for(i=1;i<=R;i++)
			{
				for(j=1;j<=C;j++)
				{
				cout<<copymap[i][j];
				}
				cout<<endl;
			}
	
	
	
}

