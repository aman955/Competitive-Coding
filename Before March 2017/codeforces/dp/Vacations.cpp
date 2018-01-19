#include <iostream>
using namespace std;



int main()
{
	int n, prev = 3, ans = 0, t;
	cin>>t;
	for(int i = 0; i < t;i++ )
	{
		cin>>n;
		if((n == 0)|| (n == 1 and prev == 1) || (n == 2 and prev == 2))
			ans++, prev = 0;
		else
			prev = (n == 3 ? 3 - prev : n);
	}
cout<<ans;
}
