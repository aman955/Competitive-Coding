#include<iostream>
#include<vector>
using namespace std;

vector<int> vec[100005];
bool visited[100005]={};
int order[1000005]={};
int n,e,a,j,b;



int main()
{
	int i;
	cin>>n>>e;
	for(i=1;i<=n;i++)
	{
		cin>>order[i];
	}
	for(i=0;i<e;i++)
	{
		cin>>a>>b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	j=1;
int flag=1;
for(i=2;i<=n;i++)
{
	flag=0;
	for(j=0;j<vec[order[i-1]].size();j++)
	{
		if(order[i]==vec[order[i-1]][j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<0<<endl;
		exit(0);
	}
}
	cout<<1<<endl;


}
