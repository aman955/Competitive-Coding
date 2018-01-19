#include <bits/stdc++.h>

using namespace std;

int a[100001];
int d[100001];

int main () {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i ++) {
		cin >> a[i];
	}
	sort(a+1,a+n);
	int ans = 0;
	for (int i = 1;i <= n;i ++) {
		int x = a[i];    
		int cur = 0;
		for (int j = 1;j * j <= x;j ++) {
			if (x % j == 0) {
				if (j > 1)     	
					cur = max (cur, d[j]);
				cur = max (cur, d[x / j]);
			}
		}
		ans = max (ans, cur + 1);
		for (int j = 1;j * j <= x;j ++) {
			if (x % j == 0) {
				d[j] = max (d[j], cur + 1);
				d[x / j] = max (d[x / j], cur + 1);     
			}
		}
	}
	cout << ans;
	return 0;
}
