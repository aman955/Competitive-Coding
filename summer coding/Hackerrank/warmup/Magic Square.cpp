#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i,j,k;
	
	int mag[8][3][3]={
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},  
  };
  int arr[3][3];
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	cin>>arr[i][j];
}

int min_cost=1323123,tempcost;
for(k=0;k<8;k++)
{
	tempcost=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tempcost=tempcost+abs(mag[k][i][j]-arr[i][j]);
		}
	}
	if(tempcost<min_cost)
	min_cost= tempcost;
}
cout<<min_cost;

}
