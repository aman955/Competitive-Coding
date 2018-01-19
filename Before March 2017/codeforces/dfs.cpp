#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
using  namespace std;
int main()
{
	int n,x,h=0,hmax=-1;
	cin>>n;
	vector < vector<int> > v(n+1);
	bool visited[n+1]={0};
	int height[n+1]={0};
	bool boss[n+1]={0};
	for(int i=1;i<n+1;i++){
		cin>>x;
		if(x==-1){
			boss[i]=1;
			continue;	
		} 
		v[x].push_back(i);
	}
	int temp,temp2;
	for(int i=1;i<n+1;i++){
		if(boss[i]){
			height[i]=1;
			stack <int> s;
			s.push(i);
			visited[i]=1;
			while(!s.empty()){
				temp=s.top();
				s.pop();
				for(int j=0;j<v[temp].size();j++){
					if(visited[v[temp][j]]) continue;
					s.push(v[temp][j]);
					visited[v[temp][j]]=1;
					height[v[temp][j]] = height[temp]+1;
				}
			}
		}
	}
	int max=height[0];
	for(int i=1;i<n+1;i++)
	if(height[i]>max)max=height[i];
	cout<<max;
}
