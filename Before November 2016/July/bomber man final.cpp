#include<iostream>
using namespace std;

int main()
{
	int R,C,i,j,k;
	long long N;
	cin>>R>>C>>N;
	
	string map[R+2],copymap[R+2];
	
		for(i=1;i<=R;i++)
	{
		cin>>map[i];
		map[i][C+1]='O';
		map[i][0]='O';
	}
	
	for(i=0;i<=C+1;i++)
	{
		map[0][i]='O';
		map[R+1][i]='O';
	}
	
	for(i=0;i<=R+1;i++)
	{
		for(j=0;j<=C+1;j++)
		copymap[i][j]='O';
	}
	
	if(N==1)
	{
		for(i=1;i<=R;i++)
		cout<<map[i]<<endl;
		return 0;
	}
	
	if(N/2==0)
	{
		for(i=0;i<=R+1;i++)
		cout<<copymap[i]<<endl;
		return 0;
	}
	
	for(k=3;k<=5;k++)
	{
		for(i=0;i<=R+1;i++)
	{
		for(j=0;j<=C+1;j++)
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
        	cout<<copymap[i]<<endl;
        	return 0;
		}	
	}
	
		for(i=1;i<=R;i++)
        	cout<<copymap[i]<<endl;
        	return 0;
	
	
}
