#include<iostream>
using namespace std;

int main()
{
	
	char str[20];
     while ( fgets( str, 25, stdin ) != NULL )
    {
	
       
	int k=1;

	int pointsA=(str[0]-'0')+(str[2]-'0')+(str[4]-'0');
	int pointsB=(str[1]-'0')+(str[3]-'0')+(str[5]-'0');

	if(pointsA==3&&pointsB==0)
	{
		cout<<"TEAM-A 6"<<endl;
	}
	else if(pointsB==3&&pointsA==0)
	{
		cout<<"TEAM-B 6"<<endl;
	}
	else
	{
		pointsA+=(str[6]-'0');
		
		if(pointsA-pointsB>=3)
		{
			cout<<"TEAM-A 7"<<endl;
			k=0;
		}
		else if(pointsB-pointsA>=2)
		{
			cout<<"TEAM-B 7"<<endl;
			k=0;
		}
	
		pointsB+=(str[7]-'0');
		if(pointsB-pointsA>=2&&k)
		{
			cout<<"TEAM-B 8"<<endl;
			k=0;
		}
		else if(pointsA-pointsB>=2&&k)
		{
			cout<<"TEAM-A 8"<<endl;
			k=0;
		}
		pointsA+=(str[8]-'0');
		if(pointsA-pointsB>=2&&k)
		{
			cout<<"TEAM-A 9"<<endl;
			k=0;
		}
		else if(pointsB-pointsA>=1&&k)
		{
			cout<<"TEAM-B 9"<<endl;
			k=0;
		}
		pointsB+=(str[9]-'0');
		if(pointsB>pointsA&&k)
		{
			cout<<"TEAM-B 10"<<endl;
			k=0;
		}
		else if(pointsA>pointsB&&k)
		{
			cout<<"TEAM-A 10"<<endl;
			k=0;
		}
		
		
		if(k)
		{
			for(int i=10;i<=18;i+=2)
			{
				pointsA+=(str[i]-'0');
				pointsB+=(str[i+1]-'0');
				if(pointsA>pointsB)
				{
					cout<<"TEAM-A "<<i+2<<endl;
					k=0;
					break;
				}
				else if(pointsB>pointsA)
				{
					cout<<"TEAM-B "<<i+2<<endl;
					k=0;
					break;
				}
			}
			if(k)
			{
				cout<<"TIE"<<endl;
			}
		}
		
		
	
		}
		
	}
}
	
	

