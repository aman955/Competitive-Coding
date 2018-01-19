#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

const int MAXN = 100005;
int dp[MAXN], p[100];

int main ()
{
	int n;
	cin >> n;
	int  x;
	vector<int> abc(n);
	for (int i = 0; i < n; i++)
	{
		cin >>x; 
		abc[i]=x;
	}
	sort(abc.begin(),abc.end());
	for(int i=0;i<n;i++)
	{
		int a=abc[i];
		int in = 0;
		for(int j = 2; j * j <= a; j++)
			while(a % j == 0)
			{
				if(in == 0 || p[in - 1] != j)
					p[in++] = j;
				a /= j;
			}
		if(a > 1)
			p[in++] = a;
		int MAX = 0;
		for(int j = 0; j < in; j++)
			MAX = max(MAX, dp[p[j]] + 1);
		for(int j = 0; j < in; j++)
			dp[p[j]] = MAX;
	}
	int MAX = 1;
	for(int i = 0; i < MAXN - 2; i++)
		MAX = max(MAX, dp[i]);
	cout << MAX << endl;
	return 0;
}
