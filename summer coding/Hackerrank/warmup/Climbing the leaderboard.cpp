#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
	int pla;
	cin>>pla;
	int x,i;
	set<int> s;
	for(i=0;i<pla;i++)
	{
		cin>>x;
		s.insert(x);
	}
	set<int>::iterator it;
	vector<int> vec;
	i=0;
	for(it=s.begin();it!=s.end();it++)
	{
		vec.push_back(*it);
	}
	int n=vec.size();
	int m;
	cin>>m;
	int ali[m];
    int j=0;
	for(i=0;i<m;i++)
	{
	cin>>ali[i];
	if(ali[i]>vec[n-1])
	{
		cout<<"1"<<endl;
		continue;
	}
	while(ali[i]>vec[j])
	{
	j++;
	}
	if(ali[i]<vec[j])
	cout<<n+1-j<<endl;
	else if(ali[i]==vec[j])
	cout<<n-j<<endl;
	else
	cout<<"1"<<endl;
    }
}
