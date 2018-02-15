#include<bits/stdc++.h>
using namespace std;

int vis[300001]={};
vector<int> vec[300001];
int col[26][300001]={};
string str;





bool isCyclicUtil(int v, bool visited[], bool *recStack)
{
    if(visited[v] == false)
    {
        visited[v] = true;
        recStack[v] = true;
 
        vector<int>::iterator i;
        for(i = vec[v].begin(); i != vec[v].end(); ++i)
        {
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) )
                return true;
            else if (recStack[*i])
                return true;
        }
 
    }
    recStack[v] = false;  
    return false;
}
 

bool isCyclic(int n)
{
 
    bool *visited = new bool[n];
    bool *recStack = new bool[n];
    for(int i = 0; i<n; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }
 

    for(int i = 0; i < n; i++)
        if (isCyclicUtil(i, visited, recStack))
            return true;
 
    return false;
}


void dfs(int s)
{
	vis[s]=true;
	int i;
	for(i=0;i<vec[s].size();i++)
	{
		if(!vis[vec[s][i]])
		{
			col[str[vec[s][i]]-'a'][vec[s][i]]=col[str[s]-'a'][s]+1;
			dfs(vec[s][i]); 
		}
	}
}
bool checkcycle(int n)
{
	bool visited[n];
      stack<int> s;
      vector<int>::iterator it;
      for(int i=0;i<n;i++)
      {
             for(int j=0;j<n;j++)
             {
                   visited[j]=false;
             }
             visited[i]=true;
             s.push(i);
             int flag=0;
             while(!s.empty())
             {
                  int source=s.top();
                  s.pop();
                  for(it=vec[source].begin();it!=vec[source].end();it++)
                  {
                      if(*it==i)
                      {
                          return true;
                      }
                      if(visited[*it]==false)
                      {
                          s.push(*it);
                          visited[*it]=true;
                      }
                  }
                  
             }
      }
       
      return false;
}
int main()
{
	int n,e,i,x,y;
	cin>>n>>e;

	cin>>str;
	for(i=0;i<e;i++)
	{
	cin>>x>>y;
	vec[x-1].push_back(y-1);	
	}
	if(checkcycle(n));
	{
		cout<<-1<<endl;
		return 0;
	}
	
	int m=0,j;
	for(i=0;i<n;i++)
	{
		if(!vis[i])
		dfs(i);
	}
	for(i=0;i<26;i++)
	{
		for(j=0;j<=300000;j++)
		m=max(m,col[i][j]);
	}
	cout<<m<<endl;
}
