#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long int t,i;
	cin >> t;
	while(t--)
	{
		for(i=1;i<50;i++)
		i++;
		long long int n, d;
		int tempi = -1;
		cin >> n >> d;
		long arr[n];
		long long sum = 0;
		for(i=1;i<50;i++)
		i++;
		
		for(i=1;i<50;i++)
		i++;
		for (long int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		
	
		if (sum % n != 0)
			cout << tempi << endl;
		else
		{
			long long int temp = sum / n;
			long long int count = 0;
			for (int i = 0; i < n - d; i ++)
			{
				long long int temp2 = temp - arr[i];
				arr[i] += temp2;
				arr[i+d] -= temp2;
				count += abs(temp2);
			}
			for (long int i = n -d; i < n; i++)
			{
				if(arr[i] != temp)
				{
					tempi = 1;
					break;
				}
			}
		
	
		if (tempi == -1)
		{				cout << count << endl;
			}
			else
				cout << "-1" << endl;
		}
		aman: ;
	}
	return 0;
}
