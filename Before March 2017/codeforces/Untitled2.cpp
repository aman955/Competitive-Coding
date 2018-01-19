#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#define pb push_back
#define ll long long int
#define vi vector<int>
#define all(c) c.begin(),c.end()
#define mod 1000000007
#define insline(s) getline(cin,s)

using namespace std;

bool rev(int x,int y) //sort in reverse order
{
	return x>y;
}

template<class T>
void swap(T *a,T *b)  //Swap function
{
	T t;
	t = *a;
	*a = *b;
	*b = t;
}
int children[103]={0};
vector< vector<int> > tree(101);

int dfs(int root){
	if(tree[root].size()==0){
		return children[root] + 1;
	}
	for(int i=0;i<tree[root].size();i++){
		if(!children[tree[root][i]])
			dfs(tree[root][i]);
		children[root] = children[root] + children[tree[root][i]] + 1;	
	}
	return children[root]+1; 
}

int main() {
	int n,m,x,y,count=0;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>y>>x;
		tree[x].pb(y);
	}
	dfs(1);
	for(int i=1;i<n+1;i++)
	if(children[i]&1)
	count++;
	cout<<count-1;
    return 0;
}
