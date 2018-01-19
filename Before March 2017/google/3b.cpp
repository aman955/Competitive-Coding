#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>
#include <string>
#include <stack>
#include <queue>
#include <cstdlib>
#include <map>
#include <algorithm>
#include <list>
#include <vector>
#include <iostream>
#define pi acos(-1.0)
#define inf_max 2147483647
#define inf_min -2147483647
#define MAX 100
using namespace std;
typedef long long int ll;
struct id
{
	string name;
	int num;
};
struct player
{
	id a[3];
}t[1000];
bool visit[1000];
map<string,int>m;
void bfs(int n)
{
	int i,j,k;
	queue<id>Q;
	id store,next;
	store.name="Isenbaevsstore.num"=0;
	Q.push(store);
	while(!Q.empty())
	{
		store=Q.front();
		Q.pop();

		for(i = 0; i < n; i++)
		{
			if(!visit[i])
			for(j = 0; j < 3; j++)
			{
				if(t[i].a[j].name == store.name)
				{
					visit[i] = 1;
					m[store.name] = store.num;
					for(k=0; k<3; k++)
					{
						if(k!=j && m[ t[i].a[k].name ]==-1 )
						{
							m[ t[i].a[k].name ] = store.num+1;
							next.name = t[i].a[k].name;
							next.num = store.num+1;
							Q.push(next);
						}
					}
				}
			}
		}
	}
}
int main()
{
	int n,i,j;
	cin>>n;
    memset(visit,false,sizeof(visit));
    for(i = 0; i < n; i++)
        for(j=0;j<3;j++)
        {
            cin>>t[i].a[j].name;
            if( m[t[i].a[j].name]==0 )  m[t[i].a[j].name] = -1;
        }

    bfs(n);

    map<string,int>::iterator it;
    for ( it=m.begin() ; it != m.end(); it++ )
        if((*it).second!=-1)   cout << (*it).first <<" "<< (*it).second << endl;
        else cout << (*it).first <<" "<<"undefined"<< endl;
}
