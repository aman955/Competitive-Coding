#include<iostream>
#include<queue>
using namespace std;

char arr[32][32]={};
bool visited[32][32]={};


int main()
{
	int n,i,j,si,sj,ei,ej;
		for(i=0;i<=31;i++)
	{
		for(j=0;j<=31;j++)
		{
			arr[i][j]='T';
		}
	
	}

	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		cin>>arr[i][j];
		if(arr[i][j]=='S')
		{
			si=i;
			sj=j;
		}
		else if(arr[i][j]=='E')
		{
			ei=i;
			ej=j;
		}
	    }
	}
	
	

	queue<pair< pair<int,int>, int > > q;
	q.push(make_pair(make_pair(si,sj),0));
	visited[si][sj]=true;
	
	while(!q.empty())
	{
	
		pair< pair<int, int> ,int > p=q.front();
		int i=p.first.first;
		int j=p.first.second;
	
		int level=p.second;
		q.pop();
		
		visited[i][j]=true;
		if(arr[i][j-1]=='E'||arr[i+1][j]=='E'||arr[i-1][j]=='E'||arr[i][j+1]=='E')
		{
			cout<<level+1<<endl;
			break;
		}
		if(arr[i+1][j]=='P'&&!visited[i+1][j])
		{
			q.push(make_pair(make_pair(i+1,j),level+1));
		}
		if(arr[i-1][j]=='P'&&!visited[i-1][j])
		{
			q.push(make_pair(make_pair(i-1,j),level+1));
		}
		if(arr[i][j+1]=='P'&&!visited[i][j+1])
		{
			q.push(make_pair(make_pair(i,j+1),level+1));
		}
		if(arr[i][j-1]=='P'&&!visited[i][j-1])
		{
			q.push(make_pair(make_pair(i,j-1),level+1));
		}
		
	}
	
	
}
