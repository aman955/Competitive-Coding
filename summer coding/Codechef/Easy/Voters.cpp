		#include<iostream>
		#include<set>
		using namespace std;
		int arr[10001]={};
		
		int main()
		{
			
			int n1,n2,x,n3;
			cin>>n1>>n2>>n3;
			while(n1--)
			{
				cin>>x;
				arr[x]++;
			}
			while(n2--)
			{
				cin>>x;
				arr[x]++;
			}
			while(n3--)
			{
				cin>>x;
				arr[x]++;
			}
			int ans=0;
			for(int i=1;i<=10000;i++)
			{
				if(arr[i]>=2)
				ans++;
			}
			cout<<ans<<endl;
			for(int i=1;i<=10000;i++)
			{
				if(arr[i]>=2)
				cout<<i<<endl;
			}
			
			
		}
