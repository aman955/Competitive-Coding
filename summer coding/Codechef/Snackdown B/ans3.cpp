#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, n, m, u, v, hit[100005], idx;
	cin >> t;
	while(t--){
		cin >> n >> m;
		fill(hit, hit+n, 0);
		for (int j = 0; j < m; j++)
		{
			cin >> u >> v;
			hit[u-1]++;
			hit[v-1]++;
		}
		
		sort(hit, hit+n);
		
		for (int j = 0; j < n; j++)
		{
			idx = upper_bound(hit, hit+n, j)-hit;
			if (idx < n)
			cout << idx;
			else cout << n-1 ;
			if (j < n-1)
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
