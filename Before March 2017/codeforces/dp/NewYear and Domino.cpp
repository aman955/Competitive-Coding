#include<iostream>
using namespace std;

int main()
{
	int h,j,i,w;
	cin>>h>>w;
	int hor[h+2][w+2]={};
	int ver[h+2][w+2]={};
	string domino[502];
	for(i=1;i<=h;i++)
	{
		cin>>domino[i];
	}
	
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			hor[i+1][j+1]=hor[i][j+1]+hor[i+1][j]-hor[i][j];
			ver[i+1][j+1]=ver[i][j+1]+ver[i+1][j]-ver[i][j];
			if(domino[i][j]!='#')continue;
			if(domino[i][j+1]=='.'&&j!=w)hor[i+1][j+1]++;
			if(domino[i+1][j]=='.'&&i!=h)ver[i+1][j+1]++;
		}
	}
	
		int q;
	cin>>q;
	while(q--) {
		int x1, y1, x2, y2;
		cin>>x1>>y1>>x2>>y2;
		int ans = 0;
		ans += hor[x2-1][y2] - hor[x1][y2] - hor[x2-1][y1] + hor[x1][y1];
		ans += ver[x2][y2-1] - ver[x1][y2-1] - ver[x2][y1] + ver[x1][y1];
		cout<<ans<<endl;
	}
}
