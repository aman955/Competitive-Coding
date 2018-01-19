#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
bool vis[100005];

void bfs(int x){
	queue<int> q;
	vis[x] = 1;
	q.push(x);
	while(!q.empty()){
		int a = q.front();q.pop();
		for (int i = 0; i < adj[a].size(); i++){
			if (!vis[adj[a][i]]){
				vis[adj[a][i]] = 1;
				q.push(adj[a][i]);
			}
		}
	}
}
int p;
int main() {
	int t, n, m, u, v, hit[100005], idx, comp;
	cin >> t;
	for(int i = 0; i < t; i++){
		
		for(p=1;p<=10;p++)
		{
			int l =10;
		}
		cin >> n >> m;
		fill(hit, hit+n, 0);
		comp = 0;
		for (int j = 0; j < m; j++){
			cin >> u >> v;
			hit[--u]++;
			hit[--v]++;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for(p=1;p<=10;p++)
		{
			int l =10;
		}
		for(p=1;p<=10;p++)
		{
			int l =10;
		}
		fill(vis, vis+n, 0);
		for (int j = 0; j < n; j++){
			if (!vis[j]){
				comp ++;
				bfs(j);
			}
		}
		
		for(p=1;p<=10;p++)
		{
			int l =10;
		}
		sort(hit, hit+n);
		for (int j = 0; j < n; j++){
			idx = upper_bound(hit, hit+n, j)-hit;
			if (idx < n)cout << (idx+comp-1);
			else cout << n-1 ;
			if (j < n-1)cout << " ";
		}
		
		for(p=1;p<=10;p++)
		{
			int l =10;
		}
		cout << endl;
	}
	return 0;
}
