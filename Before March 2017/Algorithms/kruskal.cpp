#include<iostream>
#include<set>
using namespace std;

void initialize(int arr[],int n)
{
	for(int i=0;i<n;i++)
	arr[i]=i;
}

bool find(int arr[], int a, int b)
{
	if(arr[a]==arr[b])
	return true;
	else 
	return false;
}

void uniona(int arr[],int a, int b,int n)
{
	int temp=arr[a];
	for(int i=0;i<n;i++)
	{
		if(arr[i]==temp)
		arr[i]=arr[b];
	}
}

int main()
{
	int n,e;
	cin>>n>>e;
	int arr[n+1];
set< pair <int, pair<int,int> > > cost;
   int a,b,w;
for(int i=0;i<e;i++)
{
	cin>>w>>a>>b;
	cost.insert(make_pair(w,make_pair(a,b)));
}
initialize(arr,n);
int mincost=0;
set< pair <int, pair<int,int> > >::iterator it;
while(!cost.empty())
{
	it= cost.begin();
	if(find(arr,(it->second.first),it->second.second))
	{
			cost.erase(*it);
	}
	else
	{
		cout<<it->first<<endl;
		uniona(arr,it->second.first,it->second.second,n);
		mincost=mincost+it->first;
		cost.erase(*it);
		

	}

}
cout<<mincost;

 	
}
