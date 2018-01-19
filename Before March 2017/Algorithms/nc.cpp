#include<iostream>
using namespace std;

int matrix[25][25],visited_cities[10],limit,cost=0;

int tsp(int c)
{
	int count, nearest_city=999,temp;
	int minimum=999;
	for(count=0;count<limit;count++)
	{
		if(matrix[c][count]!=0&& visited_cities[count]==0)
		{
			if(matrix[c][count]+matrix[count][0]<minimum)
			{
				minimum=matrix[c][count]+matrix[count][0];
				temp=matrix[c][count];
				nearest_city=count;
			}
		}
	}
	if(minimum!=999)
	{
		cost=cost+temp;
	}
	return nearest_city;
}


void minimum_cost(int city)
{
	int nearest_city;
	visited_cities[city]=1;
	cout<<city+1;
	nearest_city=tsp(city);
	if(nearest_city==999)
	{
		nearest_city=0;
		cout<<nearest_city+1;
		cost=cost+matrix[city][nearest_city];
	   return ;
	}
	minimum_cost(nearest_city);
}

int main()
{
	int i,j;
	cout<<"Enter number of cities"<<endl;
	cin>>limit;
	for(i=0;i<limit;i++)
	{
		for(j=0;j<limit;j++)
		{
			cin>>matrix[i][j];
		}
		visited_cities[i]=0;
	}
	
	cout<<"Path"<<endl;
	minimum_cost(0);
	cout<<"Minimum cost = "<<cost;
}
