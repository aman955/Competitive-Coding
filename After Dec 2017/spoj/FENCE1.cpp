#include<bits/stdc++.h>
using namespace std;

int main()
{
	float pi=3.1415926535;
	while(1)
	{
	int p;
	cin>>p;
	if(p==0)
	return 0;
	float l=p;
	float area=(l/2.0)*(l/pi);
	printf("%.2f\n",area);
    }
}
