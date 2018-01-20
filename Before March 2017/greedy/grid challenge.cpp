#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char x;
	vector<int> vec[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>x;
	vec[i].push_back(x-'a');
      }
    sort(vec[i].begin(),vec[i].end());
    }
    
   
    for(i=0;i<n;i++)
    {
    	for(j=1;j<n;j++)
    	{
    		if(vec[j][i]<vec[j-1][i])
    		{
    			cout<<"NO"<<endl;
    			goto aman;
			}
		}
	}
	cout<<"YES"<<endl;
	aman:  ;
    
	}
	
}
